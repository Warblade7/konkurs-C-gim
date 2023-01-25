#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char x,y;
    cin>>x>>y;
    int a,b,m,n;
    if(x>=97)
       {
         a=x-97;
         m=97;
       }
    else
        {
            a=x-65;
            m=65;
        }

    if(y>=97)
        {
            b=y-97;
            n=97;
        }
    else
        {
            b=y-65;
            n=65;
        }
    if(a<b)
        printf("%c",x);
    else if (a>b)
        printf("%c",y);
    else if (m==n)
        printf("%c",a+m);
    else
        printf("%c",a+65);
}

