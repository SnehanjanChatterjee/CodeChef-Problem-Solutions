// Sum and GCD.cpp :
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
lli GCD(lli, lli);
lli FindGcdArray(lli[], lli, lli);
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	lli t;
	cin >> t;
	while (t--)
	{
		lli n, a[1000000000], i, max1 = 0, elem = 0, gcd = 0;
		cin >> n;
		for (i = 0; i < n; i++)	cin >> a[i];
		sort(a, a + n);
		for (i = n-1; i >=0 ; i--)
		{
			elem = a[i];
			gcd = FindGcdArray(a, n, elem);
			//cout << "i = " << i << " elem = " << elem << " gcd : " << gcd << endl;
			if (gcd + elem > max1)
				max1 = gcd + elem;
		}
		cout<< max1<< endl;
	}
}
lli FindGcdArray(lli a[], lli n,lli elem)
{
	lli res = a[0];
	for (lli i = 1; i < n; i++)
	{
		if(a[i]!=elem)
			res = GCD(a[i], res);
	}
	return res;
}
lli GCD(lli a, lli b)
{
	if (a == 0)
		return b;
	else
		return GCD(b % a, a);
}
