#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    cout.tie(0);
    long long n,w,odp;
    cin>>n>>w;
    odp =(n-sqrt((n*n)-(4*w)))/2;
    cout<<odp;
}
