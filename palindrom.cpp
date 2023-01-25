#include <bits/stdc++.h>

using namespace std;
int ilespol=0;
int ilesamo=0;
bool samo (char x)
{
   if (x=='a' or x=='e' or x=='i' or x=='o' or x=='u' or x=='y'){
        ilesamo++;
        return true;
        }
   else{
        ilespol++;
        return false;
        }
}

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for (int i=0; i<n-1; i++)
    {

        if (i>0)
        {
            if (samo (s[i])==true)
            {
                if (samo (s[i-1])==true and samo (s[i+1])==true)
                {
                    cout<<"NIE";
                    return 0;
                }
                else
                {
                    if (samo (s[i-1])!=false)
                    {
                        s[i+1]='A';
                    }
                }
            }
        }
        else
        {
            if (samo (s[i])==true)
            {
                if (samo (s[i+1])==true or i+1>=n)
                {
                    cout<<"NIE";
                    return 0;
                }
                else
                {
                    s[i+1]='A';
                }
            }
        }

    }
    if(ilesamo==0 or ilespol==0){
        cout<<"NIE";
    return 0;}
    if (samo (s[n-1])==true)
            {
                if (samo (s[n-2])==true or s[n-2]=='A')
                {
                    cout<<"NIE";
                    return 0;
                }

            }
            //cout<<s[n-2];

    cout<<"TAK";
    return 0;
}
