#include <bits/stdc++.h>
using namespace std;
int main()
{
string tab[5] ={"Gawrychowski","Lorys","Nowak","Pokorski","Uznanski"};
string tab2[5] ={"Pawel","Krzysztof","Rafal","Karol","Przemyslaw"};
string nazwa;
cin>>nazwa;
for(int i=0;i<5;i++)
{
    if(nazwa==tab[i])
    {
        cout<<tab2[i];
        return 0;
    }
}
}
