#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;
int n;
int a[100][100],b[100][100],c[100][100],d[100][100],v[100],t[81],o;

int impartire (int a, int b)
{
    int x=1;
    while (b*x%223!=a)
    {
        x++;
    }
    return x;
    cout<<x;
}
void inversa(int a[100][100])
{
    int i,j,y,k,h,S,q;
    for(i=0;i<=80;i++)
{
    t[i]=i+1;
}
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
           a[i][j]=(i+j-1)%n;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
           b[i][j]=a[i][j];
           cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                a[i][j+n] = 1;
            }
            else
            {
                a[i][j+n] = 0;
            }
        }
    }
    for(i=1; i<=n-1; i++)
    {
        if(a[i][i] == 0)
        {
            cout<<"Mathematical Error!"<<i<<endl;
            for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
           exit(0);
        }
        for(j=i+1; j<=n; j++)
        {
            y = impartire(a[j][i],a[i][i]);

            for(k=1; k<=2*n; k++)
            {
                a[j][k] = (a[j][k] - y*a[i][k]+223*223)%223;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        y=impartire(1,a[i][i]);
        for(j=1; j<=2*n; j++)
        {
            a[i][j] =a[i][j]*y%223;
        }
    }
    for (i=n-1; i>=1; i--)
    {  for(h=i+1;h<=n;h++)
            {
               v[h]=a[i][h];
            }
        for(j=1; j<=2*n; j++)
        {
            for(h=i+1;h<=n;h++)
            {
               a[i][j]=(a[i][j]-a[h][j]*v[h]+223*223)%223 ;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            c[i][j]=a[i][j+n];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    } for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            d[i][j]=0;
            for(k=1;k<=n;k++)
                d[i][j]=(d[i][j]+b[i][k]*c[k][j])%223;

        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
    int main ()
    {
        cin>>n;
        inversa (a);

        return 0;
    }
