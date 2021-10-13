#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
void encode1(char s[300000], char r[300000])
{
    char cod;
    int pozitie;
    int i,a=2,b=3;
    strcpy(r,s);
    for(i=0;i<strlen(s);i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void encode2(char s[300000], char r[300000])
{
    char cod;
    int pozitie;
    int i,a=65,b=18;
    strcpy(r,s);
    for(i=0;i<strlen(s);i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void encode3(char s[300000], char r[300000])
{
    char cod;
    int pozitie;
    int i,a=2,b=3;
    strcpy(r,s);
    for(i=0;i<strlen(s);i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void encode4(char s[300000], char r[300000])
{
    char cod;
    int pozitie;
    int i,a=2,b=3;
    strcpy(r,s);
    for(i=0;i<strlen(s);i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void encode5(char s[300000], char r[300000])
{
    char cod;
    int pozitie;
    int i,a=2,b=3;
    strcpy(r,s);
    for(i=0;i<strlen(s);i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}


int main()
{
char s[300000],r[300000]="",cod;
cout<<"Give text: ";
cin.get(s,300);
encode1(s,r);
cout<<r<<'\n';
cout<<'\n';
encode2(s,r);
cout<<r;
    return 0;
}
