#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
ulli a[10000000];
void leftshift(ulli [],ulli ,ulli ,ulli );
void leftshift_end(ulli [],ulli ,ulli ,ulli );
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ulli t;
	cin>>t;
	while(t--)
	{
        ulli n,sum=0,i;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        
        ulli mina=INT_MAX,index=0,m=n,sumall=0;
        while(true)
        {
            sum=0;index=0;mina=INT_MAX;
            if(m==2)
            {
                sumall+=(a[0]+a[1]);
                break;
            }
            for(i=0;i<m-1;i++)
            {
                sum = (a[i]+a[i+1]);
                if(sum<mina)
                {
                    mina=sum;
                    index=i;
                }
            }
            if((a[0]+a[m-1])<mina)
            {
                //cout<<"Boundary condition found (a[0])"<<a[0]<<" + (a["<<m-1<<"])"<<a[m-1]<<" < "<<mina<<endl;
                mina=a[0]+a[m-1];
                index=0;
            }
        
            if(index==0 && mina!=(a[0]+a[1]))
                leftshift_end(a,index,mina,m);
            else
                leftshift(a,index,mina,m);
            m--;
            sumall+=mina;
            //cout<<"min = "<<mina<<" index = "<<index<<" m = "<<m<<" sumall = "<<sumall<<endl;
            //cout<<"Array is : ";
            //for(i=0;i<m;i++)
            //    cout<<a[i]<<" ";
            //cout<<"\n";
        }
        cout<<sumall<<"\n";
	}
}
void leftshift(ulli a[],ulli index,ulli val,ulli range)
{
    ulli i;
    //cout<<"Inside leftshift\n";
    for(i=index+1;i<range-1;i++)
    {
        //cout<<"(a["<<i<<"]) "<<a[i]<<" = (a["<<i+1<<"]) "<<a[i+1]<<endl;
        a[i]=a[i+1];
    }
    //cout<<"Outside for loop (a["<<index<<"]) "<<a[index]<<" = "<<val<<endl;
    a[index]=val;
}
void leftshift_end(ulli a[],ulli index,ulli val,ulli range)
{
    //cout<<"Inside leftshift_end\n";
    a[index]=val;
}
