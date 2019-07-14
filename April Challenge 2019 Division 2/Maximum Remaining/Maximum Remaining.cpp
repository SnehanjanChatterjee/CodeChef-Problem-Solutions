// Maximum Remaining.cpp : Snehanjan Chatterjee
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a[1000000], i, j,max1=0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin>>a[i];
    //long long int *b;
    //b = max_element(a,a+n);
    //cout << "Max is : " << *b <<endl;
    sort(a,a+n);
    max1=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<max1)
        {
            max1=a[i];
            break;
        }
    }
    if(max1<a[n-1])
        cout << max1 << endl;
    else
        cout << "0" << endl;
}

