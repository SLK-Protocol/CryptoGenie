#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;
int v[110],j,u[101],x;
void encode1(char s[300000], char r[300000]) // Algoritm Criptare
{
    char cod;
    int i,w;
    strcpy(r,s);// copiem textul de criptat
    for(i=0; i<strlen(s); i++)
    {x=int(s[i]);
        while (x<0)
            x=x+256;
            x=x%256;//x e codul ASCII a caracterului de pe pozitia i in textul de criptat, adus la valori optime
        cod=char(((x-31)*u[i%80])%223+31);//caracterul se cripteaza in mod specific unei chei unice
        r[i]=cod;
    }
}
void decode1(char r[300000], char t[300000]) // Algoritm Decriptare
{
    char cod;
    int i,a,simetric,x;
    strcpy (t,r);

    for(i=0; i<strlen(r); i++)
    {
        while((u[i%80]*simetric)%223!=1)
            simetric++;//generam simetricul elementului care realizeaza criptarea (cel din cheie) in grupul Z(223,*)
        x=int(r[i]);
        while (x<0)
            x=x+256;
        x=x%256;
        cod=char((int(x-31)*simetric)%223+31); // realizam decriptarea in mod specific cheii unice
        t[i]=cod;

    }
}
void rs(long long int a, long long int &fin) // algoritm generare cheie unica
{
    long long int g=5,p=100000007,gl,gp,r=0,c=0,x=1,i,y=1,z=1,m,n,t;
    cout<<"===================== REMOTE COMMUNICATION =====================";
    cout<<'\n'<<'\n';
    cout<<"Local=";
    cin>>a;//utilizatorul alege un numar aleatoriu secret intre 1 si p(p este numarul prim in al carui grup Z(p,*) lucram)
    cout<<'\n';
    m=a/10000;
    t=a%10000;//in loc sa ridicam pe 5 la a, ceea ce ar insemna inmultirea lui 5 cu el insusi de a ori, retinem cat da 5 inmultit cu el insusi de 10000 ori
    for(i=0; i<m; i++)//si intepretam inmultirea in felul urmator: Inmultim pe 24802769 (5^10000%p) cu el insusi de un numar egal cu catul impartii lui a la
                        //10000 si rezultatul il inmultim cu 5 de un numar de ori egal cu restul impartirii lui a la 10000
    {
        x=(x*24802769)%p;//prima parte cea cu catul
    }
    for (i=0; i<t; i++)
    {
        z=(z*5)%p;//a doua parte cea cu restul
    }
    gl=(x*z)%p;
    cout<<"Give partner= "<<gl;//dam partenerului numarul generat (g^a, unde a e numarul secret , g=5 generatorul)
    cout<<'\n'<<'\n';
    x=1;
    y=1;
    z=1;
    cout<<"Partner= ";
    cin>>gp;//introducem numarul partenurului, obtinut simetric, g^b unde gp e numarul sau secret
    cout<<'\n';
    for(i=0; i<10000; i++)
    {
        x=(x*gp)%p;
    }
    for(i=0; i<m; i++)
    {
        y=(y*x)%p;
    }
    for (i=0; i<t; i++)
    {
        z=(z*gp)%p;// cei doi utilizatori genereaza numarul comun g^(ab), numar care e computabil dificil de obtinut din datele publice (stiind g^a si g^b)
    }
    fin=(y*z)%p;
    fin=fin%100000000;
    fin=fin+100000000;
    for(i=0; i<8; i++)
    {
        v[i*8+j]=fin%10;
        fin=fin/10;// din cheia obtinuta generam un vector, utilizat de a lungul encriptiei ca vector cheie
    }
}
int main()
{
    long long int a,fin,gl,k,encrypt[102],decrypt[101],men,P=1,menu=1;
    char s[300000],r[300000],t[300000];
    for(j=0; j<10; j++)
    {
        rs(a,fin);
    }
    cout<<"======================== PEER COMM ESTABLISHED ==========================";
    cout<<'\n'<<'\n';
    do
    {
        for(k=0; k<=100; k++)
            u[k]=v[k]*10+v[(k+1)]+2;

        cout<<"1-Encode 2-Decode 3-New Key";
        cout<<'\n'<<'\n';
        do
        {
            cout<<"Option: ";
            cin>>men;
        }
        while(men<1 || men>3);
        if(men==1)
        {
            cout<<'\n';
            cout<<"Give text: ";
            cin.get();
            cin.getline(s,300000);
            cout<<'\n';
            cout<<"Encoded Text: ";
            encode1(s,r);
            cout<<r;// variabila men ia valoarea 1 => se va apela functia de criptare
        }
        if (men==2)
        {
            cout<<'\n';
            cout<<"Give text: ";
            cin.get();
            cin.getline(s,300000);
            cout<<'\n';
            cout<<"Decoded Text: ";
            decode1(s,t);// variabila men ia valoarea 2 => se va apela functia de decriptare
            cout<<t;
        }
        if (men==3)
        {
            main();
        }// pentru valoarea 3 se reincepe programul, echivalat prin generarea unei chei noi
        cout<<'\n'<<'\n';
        cout<<"======================== SLK-PROTOCOL ==========================";
        cout<<'\n'<<'\n';
    }
    while(menu);
    return 0;
}
