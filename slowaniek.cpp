#include <bits/stdc++.h>
using namespace std;

int main ()
{
cout<<"={";
for(int i=1;i<=4000;i++)
{
    bool czyjest=0;
    int temp=i;
    while(temp!=0 and czyjest==0){
    if((temp%10==4 or temp%10==9))
    {
        cout<<i;
        cout<<",";
        czyjest=1;

    }
    else temp/=10;
    }
}
cout<<"};";
}

