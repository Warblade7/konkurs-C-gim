#include <bits/stdc++.h>
using namespace std;
long double a,b,n,w,temp,suma,trapezczyprost;
double trapez(double r)
{
    for(int i=1;i<=n;i++)
    {
        double x=a+i*w;
        temp=(1/((x)*(x)+1));
        suma+=temp;
        //cout<<x<<endl;
        //cout<<temp<<endl;

    }
    return ((suma*2+a+b)*w/2);
}
double prost(double r)
{
    for(int i=1;i<=n;i++)
    {
        double x=a+(i*w)-(w/2);
        temp=(1/((x)*(x)+1));
        suma+=temp;
       //cout<<suma<<endl;
    }
    return (suma*w);
}
int main()
{
    cout<<"podaj poczatek, koniec i na ile podzielic"<<endl;
    cin>>a>>b>>n;
    w=(b-a)/n;
    double r=(b-a)/2;
    cout<<"METODA TRAPEZOW 1, METODA PROSTOKATOW 2"<<endl;
    cin>>trapezczyprost;
    if(trapezczyprost==1)
        cout<<trapez(r);
    if(trapezczyprost==2)
        cout<<prost(r);
}
