#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[1000000];
        long int i=0,c=0,n;
        cin>>n;
        cin>>s;
        while(i<n)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='1' || s[i-1]=='1')
                    i+=3;
                else
                {
                    s[i]='1';
                    c++;
                    i+=2;
                }
            }
            else
                i+=2;
        }
        cout<<c<<endl;
    }
    return 0;
}
