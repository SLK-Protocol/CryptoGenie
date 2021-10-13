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
    int i,a=2,b=3,x,j;
    strcpy(t,r);
    for(i=0; i<strlen(r); i++)
    {
        j=i%223;
        x=int (r[i]);
        while (x<0)
            x=x+256;
        x=(x-32-b-j*j*j)*112;
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
void encode3(char s[300000], char r[300000])
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
void encode4(char s[300000], char r[300000])
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
void encode5(char s[300000], char r[300000])
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
int main()
{
    char s[300000],r[300000],t[300000]="";
    cout<<"Give text: ";
    cin.get(s,300000);
    encode1(s,r);
    cout<<r<<'\n';
    decode1(r,t);
    cout<<t;

    return 0;
}
