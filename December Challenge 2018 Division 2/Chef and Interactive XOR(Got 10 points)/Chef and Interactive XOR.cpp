#include <iostream>
//#define MAX 1000000000000000000000000000000

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long int n,x;
        cin>>n;
        unsigned long long int a[1000000];
        for(int i=1;i<=n;i++)
        {
            cout<<"1"<<" "<<i<<" "<<i<<" "<<i<<flush<<endl;
            cin>>x;
            a[i]=x;
        }
        cout<<"2";
        for(int i=1;i<=n;i++)
        {
            cout<<" "<<a[i]<<flush;
        }
        cout<<"\n"<<flush;
        cin>>x;
        t=t-1;
    }
}
