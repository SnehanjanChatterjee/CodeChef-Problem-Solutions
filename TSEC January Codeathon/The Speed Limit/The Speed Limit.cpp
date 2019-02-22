#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
	    double l,d,h;
	    cin>>l>>d>>h;
	    if(double(d/l)<=h)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
