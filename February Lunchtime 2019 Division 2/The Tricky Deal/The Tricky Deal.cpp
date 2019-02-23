#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int a,d1=0,d2=0,i=1,p=0,max1=-1,give=0;
        cin>>a;
        do
        {
            give=pow(2,i-1);
            p+=a-give;
            if(p>max1)
            {
                max1=p;
                d2=i;
            }
            i++;
        }while(p>=0);
        d1=i-2;
        cout<<d1<<" "<<d2<<endl;
    }
    return 0;
}
