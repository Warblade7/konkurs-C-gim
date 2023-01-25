#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    long long n;
        long long a,b;
        cin>>n;
        for(int i=0;i<n;i++)
        {
        cin>>a>>b;
        if(b>3){
        if(b%2==0)
            cout<<b<<"\n";
            else
                if(b-1>=a)
                cout<<b-1<<"\n";
                    else
                    cout<<"NIE"<<"\n";}
        else
        cout<<"NIE"<<"\n";
        }
}
