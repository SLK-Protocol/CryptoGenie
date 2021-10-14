#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
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
    cout<<"Give text: ";
    cin.get(s,300000);
    encode1(s,r);
    cout<<r<<'\n';
   decode1(r,t);
    cout<<t<<'\n';
   encode2(s,r);
    cout<<r<<'\n';
    decode2(r,t);
    cout<<t<<'\n';
 encode3(s,r);
    cout<<r<<'\n';
    decode3(r,t);
    cout<<t<<'\n';
     encode4(s,r);
    cout<<r<<'\n';
    decode4(r,t);
    cout<<t<<'\n';
     encode5(s,r);
    cout<<r<<'\n';
    decode5(r,t);
    cout<<t<<'\n';
    return 0;
}
