#include <bits/stdc++.h>
using namespace std;
//void merge_sort(long long int arr[],long long int ,long long int );
//void merge(long long int arr[],long long int ,long long int ,long long int ,long long int );
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,arr[1000000],i,c=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        //merge_sort(arr,0,n-1);
        sort(arr,arr+n);
        if(arr[0]==0)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]<=c)
                {
                    c++;
                }
                else
                    break;
            }
            cout<<c<<endl;
        }
        else
            cout<<c<<endl;
    }
    return 0;
}
/*void merge_sort(long long int arr[],long long int i,long long int j)
{
    long long int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        merge_sort(arr,i,mid);
        merge_sort(arr,mid+1,j);
        merge(arr,i,mid,mid+1,j);
    }
}

void merge(long long int arr[],long long int i1,long long int j1,long long int i2,long long int j2)
{
    long long int i,j,k=0;
    long long int temp[1000000];
    i=i1;
    j=i2;
    while(i<=j1 && j<=j2)
    {
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=j1)
        temp[k++]=arr[i++];
    while(j<=j2)
        temp[k++]=arr[j++];
    for(i=i1,j=0;i<=j2;i++,j++)
        arr[i]=temp[j];
}*/
