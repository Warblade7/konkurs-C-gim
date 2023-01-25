#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long a,b;
    cin>>a>>b;
    long long lazikl=0;
    for(int i=1;i<=sqrt(a);i++)
    {
        if(b%i==0){
        lazikl=b/i;
        if(lazikl+i==a){
        cout<<i;

        }
        }
    }
}
