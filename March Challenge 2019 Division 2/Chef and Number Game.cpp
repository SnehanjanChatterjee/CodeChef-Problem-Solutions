//============================================================================
// Name        : Snehanjan Chatterjee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,a[1000000000],i,sumn=0,sump=0,pos=0,neg=0,max1=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			{
				sumn+=a[i];
				neg++;
			}
			else if(a[i]>0)
			{
				sump+=a[i];
				pos++;
			}
		}
		max1=pow(sumn,2)+pow(sump,2);
		if(pos==0)
			cout<<neg<<" "<<neg<<endl;
		else if(neg==0)
			cout<<pos<<" "<<pos<<endl;
		else if(pos>neg)
			cout<<pos<<" "<<neg<<endl;
		else
			cout<<neg<<" "<<pos<<endl;
	}
}
