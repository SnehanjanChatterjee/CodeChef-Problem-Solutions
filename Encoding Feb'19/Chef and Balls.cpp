#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c=0;
        cin>>a>>b;
        if(a>=b && b!=0)
        {
            c=a/b;
            cout<<c<<endl;
        }
        else
            cout<<"cannot distribute"<<endl;
    }
    return 0;
}
