#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,v,i,val=0,asum=0,total=0,a[10000];
        cin>>n>>k>>v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            asum+=a[i];
        }
        total=v*(n+k);
        val=total-asum;
        if(val>0 && (val%k==0))
        {
            val/=k;
            cout<<val<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
