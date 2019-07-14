#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        char s[100000];
        cin>>s;
        bool flag=false;
        for(long long int i=0;i<strlen(s);i++)
        {
            if(s[i]=='M' && s[i+1]=='U' && s[i+2]=='J')
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<"NO"<<endl;
    }
    return 0;
}
