#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,r,c=0,val;
    cin>>n>>k>>r;
    val=k;
    c=n;
    for(int i=1;i<100*n;i++)
    {
        if(c>0)
        {
            if((val-i*r)>=0)
            {
                val-=i*r;
                c--;
            }
            else
                break;
        }
        else
            break;
    }
    cout<<c<<endl;
}

