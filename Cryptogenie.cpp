#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
void rs(int a, int &fin)
{
    int g=3,p=17,gl,gp;
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

    fin=1;
    while (a!=0)
    {
        fin=(fin*gp)%p;
        a--;
    }

    fin=fin%17;
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
void encode6(char s[300000], char r[300000])
{
    char cod;
    int i,a=10,b=2;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode6 (char r[300000], char t[300000])
{
    char cod;
    int i,a=10,b=2,x,j,simetric=1;
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
void encode7(char s[300000], char r[300000])
{
    char cod;
    int i,a=43,b=1;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode7 (char r[300000], char t[300000])
{
    char cod;
    int i,a=43,b=1,x,j,simetric=1;
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
void encode8(char s[300000], char r[300000])
{
    char cod;
    int i,a=23,b=29;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode8 (char r[300000], char t[300000])
{
    char cod;
    int i,a=23,b=29,x,j,simetric=1;
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
void encode9(char s[300000], char r[300000])
{
    char cod;
    int i,a=92,b=9;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode9 (char r[300000], char t[300000])
{
    char cod;
    int i,a=92,b=9,x,j,simetric=1;
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
void encode10 (char s[300000], char r[300000])
{
    char cod;
    int i,a=10,b=43;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode10 (char r[300000], char t[300000])
{
    char cod;
    int i,a=10,b=43,x,j,simetric=1;
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
void encode11(char s[300000], char r[300000])
{
    char cod;
    int i,a=11,b=35;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode11 (char r[300000], char t[300000])
{
    char cod;
    int i,a=11,b=35,x,j,simetric=1;
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
void encode12 (char s[300000], char r[300000])
{
    char cod;
    int i,a=12,b=9;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode12 (char r[300000], char t[300000])
{
    char cod;
    int i,a=12,b=9,x,j,simetric=1;
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
void encode13(char s[300000], char r[300000])
{
    char cod;
    int i,a=12,b=7;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode13 (char r[300000], char t[300000])
{
    char cod;
    int i,a=12,b=7,x,j,simetric=1;
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
void encode14(char s[300000], char r[300000])
{
    char cod;
    int i,a=14,b=7;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode14 (char r[300000], char t[300000])
{
    char cod;
    int i,a=14,b=7,x,j,simetric=1;
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
void encode15 (char s[300000], char r[300000])
{
    char cod;
    int i,a=15,b=7;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode15 (char r[300000], char t[300000])
{
    char cod;
    int i,a=15,b=7,x,j,simetric=1;
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
void encode16(char s[300000], char r[300000])
{
    char cod;
    int i,a=16,b=7;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {
        cod=char(((int(s[i])-32)*a+b+i*i*i)%223+32);
        r[i]=cod;
    }
}
void decode16 (char r[300000], char t[300000])
{
    char cod;
    int i,a=16,b=7,x,j,simetric=1;
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
        if(fin==6)
        {
            encode6 (s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==7)
        {
            encode7(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==8)
        {
            encode8(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==9)
        {
            encode9(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==10)
        {
            encode10(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';

        }
        if(fin==11)
        {
            encode11(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==12)
        {
            encode12(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==13)
        {
            encode13(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==14)
        {
            encode14(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==15)
        {
            encode15(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';

        }
        if(fin==16)
        {
            encode16(s,r);
            cout<<"Encoded Text: "<<r;
            cout<<'\n';
        }

    }
    if(men==2)
    {

        if(fin==1)
        {
            decode1(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==2)
        {
            decode2(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==3)
        {
            decode3(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==4)
        {
            decode4(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==5)
        {
            decode5(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';

        }
        if(fin==6)
        {
            decode6 (s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==7)
        {
            decode7(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==8)
        {
            decode8(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==9)
        {
            decode9(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==10)
        {
            decode10(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';

        }
        if(fin==11)
        {
            decode11(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==12)
        {
            decode12(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==13)
        {
            decode13(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==14)
        {
            decode14(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
        if(fin==15)
        {
            decode15(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';

        }
        if(fin==16)
        {
            decode16(s,r);
            cout<<"Decoded Text: "<<r;
            cout<<'\n';
        }
    }
    cin.get();
    return 0;
}
