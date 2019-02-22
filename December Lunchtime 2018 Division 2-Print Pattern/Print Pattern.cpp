#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,a[100][100]={0},k=0,value_j=0,num=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    value_j=j;
                    k=i;
                    do
                    {
                        a[k][value_j]=num;
                        num++;
                        k++;
                        value_j--;
                    }while(k-1!=j);
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
}
