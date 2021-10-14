#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
void rs(int a, int &fin)
{
    int g=2,p=5,gl,gp;
    cout<<"===================== REMOTE COMMUNICATION =====================";
    cout<<'\n'<<'\n';
    cout<<"Local=";
    cin>>a;
    cout<<'\n';
    gl=pow(g,a);
    gl=gl%p;
    cout<<"Give to partner="<<gl;
    cout<<'\n'<<'\n';
    cout<<"Partner=";
    cin>>gp;
    cout<<'\n';
    fin=pow(gp,a);
    fin=fin%5;
    cout<<"===================== CRYPTOGENIE BY DKD =======================";
    cout<<'\n'<<'\n';
}
void encode1(char s[300000], char r[300000])
{
    char cod;
    int i,a=2,b=3;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode1(char r[300000], char t[300000])
{
    char cod;
    int i,a=2,b=3,x,j,simetric=1;
    strcpy(t,r);
    while ((a*simetric)%223 != 1)
        simetric++;
    for(i=0; i<strlen(r); i++)
    {
        j=i%223;
        x=int (r[i]);
        while (x<0)
            x=x+256;
        x=(x-32-b-j*j*j)*simetric;
        while (x<0)
            x=x+223;
        cod=char(x%223+32);
        t[i]=cod;
    }
}
void encode2(char s[300000], char r[300000])
{
    char cod;
    int i,a=65,b=18;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode2 (char r[300000], char t[300000])
{
    char cod;
    int i,a=65,b=18,x,j,simetric=1;
    strcpy(t,r);
    while ((a*simetric)%223 != 1)
        simetric++;
    for(i=0; i<strlen(r); i++)
    {
        j=i%223;
        x=int (r[i]);
        while (x<0)
            x=x+256;
        x=(x-32-b-j*j*j)*simetric;
        while (x<0)
            x=x+223;
        cod=char(x%223+32);
        t[i]=cod;
    }
}
void encode3(char s[300000], char r[300000])
{
    char cod;
    int i,a=8,b=8;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode3(char r[300000], char t[300000])
{
    char cod;
    int i,a=8,b=8,x,j,simetric=1;
    strcpy(t,r);
    while ((a*simetric)%223 != 1)
        simetric++;
    for(i=0; i<strlen(r); i++)
    {
        j=i%223;
        x=int (r[i]);
        while (x<0)
            x=x+256;
        x=(x-32-b-j*j*j)*simetric;
        while (x<0)
            x=x+223;
        cod=char(x%223+32);
        t[i]=cod;
    }
}

void encode4(char s[300000], char r[300000])
{
    char cod;
    int i,a=9,b=9;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode4(char r[300000], char t[300000])
{
    char cod;
    int i,a=9,b=9,x,j,simetric=1;
    strcpy(t,r);
    while ((a*simetric)%223 != 1)
        simetric++;
    for(i=0; i<strlen(r); i++)
    {
        j=i%223;
        x=int (r[i]);
        while (x<0)
            x=x+256;
        x=(x-32-b-j*j*j)*simetric;
        while (x<0)
            x=x+223;
        cod=char(x%223+32);
        t[i]=cod;
    }
}
void encode5(char s[300000], char r[300000])
{
    char cod;
    int i,a=2,b=7;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode5 (char r[300000], char t[300000])
{
    char cod;
    int i,a=2,b=7,x,j,simetric=1;
    strcpy(t,r);
    while ((a*simetric)%223 != 1)
        simetric++;
    for(i=0; i<strlen(r); i++)
    {
        j=i%223;
        x=int (r[i]);
        while (x<0)
            x=x+256;
        x=(x-32-b-j*j*j)*simetric;
        while (x<0)
            x=x+223;
        cod=char(x%223+32);
        t[i]=cod;
    }
}
int main()
{
    char s[300000],r[300000],t[300000]="";
    int men,alg,a,fin;
    rs(a,fin);
    cout<<"1-Encode 2-Decode"<<'\n';
    cout<<'\n';
    do
    {
        cout<<"Option: ";
        cin>>men;
    }
    while(men<1 || men>2);
    cout<<'\n';
    cout<<"Give text: ";
    cin.get();
    cin.getline(s,300000);
    cout<<'\n';
    if(men==1)
    {
        if(fin==1)
        {
            encode1(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==2)
        {
            encode2(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==3)
        {
            encode3(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==4)
        {
            encode4(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==5)
        {
            encode5(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
    }
    if(men==2)
    {

        if(fin==1)
        {
            decode1(s,t);
            cout<<"Decoded Text: "<<t;
            cout<<'\n';
        }
        if(fin==2)
        {
            decode2(s,t);
            cout<<"Decoded Text: "<<t;
            cout<<'\n';
        }
        if(fin==3)
        {
            decode3(s,t);
            cout<<"Decoded Text: "<<t;
            cout<<'\n';
        }
        if(fin==4)
        {
            decode4(s,t);
            cout<<"Decoded Text: "<<t;
            cout<<'\n';
        }
        if(fin==5)
        {
            decode5(s,t);
            cout<<"Decoded Text: "<<t;
            cout<<'\n';
        }
    }
    return 0;
}
