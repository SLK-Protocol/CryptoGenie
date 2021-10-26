#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;
int n;
int a[100][100],v[100];
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
    int i,j,y,k,h;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<"a["<< i<<"]"<< j<<"]= ";
            cin>>a[i][j];
        }
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
            cout<<"Mathematical Error!";
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
        for(j=1; j<=2*n; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}
    int main ()
    {
        cin>>n;
        inversa (a);
        return 0;
    }
