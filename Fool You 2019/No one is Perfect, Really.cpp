#include<bits/stdc++.h> 
using namespace std; 
long long int Perf(long long int );
int main() 
{ 
	long long int n,s;
	cin>>n;
	s=Perf(n);
	if (s==n & n!=1) 
		cout<<"Perfect"<<endl;
	else
	    cout<<"Not Perfect"<<endl;
} 
long long int Perf(long long int n) 
{ 
	long long int sum=1,i; 
	for (i=2;i*i<=n;i++) 
	{ 
		if (n%i==0) 
		{ 
			if(i*i!=n) 
				sum+=i+n/i; 
			else
				sum+=i; 
		} 
	} 
	return sum; 
} 


