#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
int v[110],j,u[101];

void encode1(char s[300000], char r[300000])
{
    char cod;
    int i,w;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {

        cod=char(((int(s[i])-31)*u[i%80])%223+31);
        r[i]=cod;
    }
}
void decode1(char r[300000], char t[300000])
{
    char cod;
    int i,a,simetric,x;
    strcpy (t,r);

    for(i=0; i<strlen(r); i++)
    {   while ((u[i%80]*simetric)%223 != 1)
        simetric++;
        x=int(r[i]);
        while (x<0)
            x=x+256;
        x=x%256;
        cod=char((int(x-31)*simetric)%223+31);
        t[i]=cod;
    }
}
void rs(long long int a, long long int &fin)
{
    long long int g=5,p=100000007,gl,gp,r=0,c=0,x=1,i,y=1,z=1,m,n,t;
    cout<<"===================== REMOTE COMMUNICATION =====================";
    cout<<'\n'<<'\n';
    cout<<"Local=";
    cin>>a;
    cout<<'\n';
    m=a/10000;
    t=a%10000;
    for(i=0; i<m; i++)
    {
        x=(x*24802769)%p;
    }
    for (i=0; i<t; i++)
    {
        z=(z*5)%p;
    }
    gl=(x*z)%p;
    cout<<"Give partner= "<<gl;
    cout<<'\n'<<'\n';
    x=1;
    y=1;
    z=1;
    cout<<"Partner= ";
    cin>>gp;
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
        z=(z*gp)%p;
    }
    fin=(y*z)%p;
    fin=fin%100000000;
    fin=fin+100000000;
    for(i=0; i<8; i++)
    {
        v[j*8+i]=fin%10;
        fin=fin/10;
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

        cout<<"1-Encode 2-Decode 3-Generate a new key";
        cout<<'\n'<<'\n';
        do
        {
            cout<<"Option: ";
            cin>>men;
        }
        while(men<1 || men>3);
        cout<<'\n';
        cout<<"Give text: ";
        cin.get();
        cin.getline(s,300000);
        cout<<'\n';
        if(men==1)
        {
            cout<<"Encoded Text: ";
            encode1(s,r);
            cout<<r;
        }
        if (men==2)
        {
            cout<<"Decoded Text: ";
            decode1(s,t);
            cout<<t;
        }
        if (men == 3)
        {
            for (k = 0; k <= 100; k++)
                u[k] = v[k] * 10 + v[(k + 1)] + 2;
            for (j = 0; j < 10; j++)
            {
                rs(a, fin);
            }

            cout << "1-Encode 2-Decode";
            cout << '\n' << '\n';
            do
            {
                cout << "Option: ";
                cin >> men;
            } while (men < 1 || men>2);
            cout << '\n';
            cout << "Give text: ";
            cin.get();
            cin.getline(s, 300000);
            cout << '\n';
            if (men == 1)
            {
                cout << "Encoded Text: ";
                encode1(s, r);
                cout << r;
            }
            if (men == 2)
            {
                cout << "Decoded Text: ";
                decode1(s, t);
                cout << t;
            }
        }
        cout<<'\n'<<'\n';
        cout<<"======================== SLK-PROTOCOL ==========================";
        cout<<'\n'<<'\n';
    }
    while(menu);
    return 0;
}
