#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
int v[110],j;
void encode1(char s[300000], char r[300000])
{
    char cod;
    int i,w;
    strcpy(r,s);
    for(i=0; i<strlen(s); i++)
    {   w=(int(s[i])%80);
        cod=char(int(s[i])+v[i%8]);
        r[i]=cod;
    }
}
    void decode1(char r[300000], char t[300000])
{
    char cod;
    int i;
    strcpy (t,r);
    for(i=0; i<strlen(r); i++)
    {
        cod=char(int(r[i])-v[i%8]);
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
    for(i=0;i<m;i++)
    {
      x=(x*24802769)%p;
    }
   for (i=0;i<t;i++)
   {
       z=(z*5)%p;
   }
   gl=(x*z)%p;
   cout<<"Give partner= "<<gl;
   x=1;y=1;z=1;
   cout<<"Partner= ";
   cin>>gp;
   for(i=0;i<10000;i++)
   {
       x=(x*gp)%p;
   }
   for(i=0;i<m;i++)
    {
      y=(y*x)%p;
    }
   for (i=0;i<t;i++)
   {
       z=(z*gp)%p;
   }
fin=(y*z)%p;
fin=fin%100000000;
fin=fin+100000000;
for(i=0;i<8;i++)
{
    v[j*8+i]=fin%10;
    fin=fin/10;
    //cout<<v[j*8+i]<<" "<<fin<<" "<<j<<" "<<i<<endl;
}
}


int main()
{ long long int a,fin,gl,k,u[101],encript[101],decript[101],men,P=1;
   char s[300000],r[300000],t[300000];
   for(j=0;j<5;j++)
   {
       rs(a,fin);
   }
  // for(k=0;k<80;k++)
  // {
      // cout<<v[k]<<" "<<k<<endl;
  // }
  for(k=0;k<=100;k++)
    u[k]=v[k]*10+v[(k+1)];
    //encript[0]=u[0];
  //  for(k=1;k<=100;k++)
   // {  encript[k]=u[k];

     // for(i=0;i<k;i++)
       //     P=P*(encript[k]-encript[i]);
         //   while (P==0)
           // {

            //}
   // }

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
     encode1(s,r);
     cout<<r;
    }
    if (men==2)
    {
        decode1(s,t);
        cout<<t;
    }
    return 0;
}
