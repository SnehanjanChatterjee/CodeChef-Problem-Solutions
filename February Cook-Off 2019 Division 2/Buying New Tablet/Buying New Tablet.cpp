#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n=0,b=0,w=0,h=0,p=0,max1=0,i,area=0;
        cin>>n>>b;
        for(i=0;i<n;i++)
        {
            cin>>w>>h>>p;
            if(p<=b)
            {
                area=w*h;
                if(area>max1)
                {
                    max1=area;
                }
            }
        }
        if(max1==0)
            cout<<"no tablet"<<endl;
        else
            cout<<max1<<endl;
    }
    return 0;
}
