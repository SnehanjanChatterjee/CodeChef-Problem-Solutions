#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lli tc;
	cin>>tc;
	while(tc--)
	{
	   lli x,y,k;
	   cin>>x>>y>>k;
	   lli total = x+y;
	   if(total<k)
            cout<<"Chef"<<endl;
       else
       {
           if(total%k==0)
           {
                lli div=total/k;
                if(div%2==0)
                    cout<<"Chef"<<endl;
                else
                    cout<<"Paja"<<endl;
           }
           else
           {
               lli div = total/k;
                if(div%2==0)
                    cout<<"Chef"<<endl;
                else
                    cout<<"Paja"<<endl;
           }
       }
	}
}
