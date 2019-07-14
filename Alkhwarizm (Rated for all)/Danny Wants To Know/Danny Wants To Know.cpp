// Danny Wants To Know.cpp :Snehanjan Chatterjee
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long int n, q, a[10000000], b[10000000], i;
	cin >> n >> q;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i <= n; i++)
		cin >> b[i];
	while (q--)
	{
		long long int l, r, sum = 0;
		cin >> l >> r;
		for (i = l; i <= r; i++)
		{
			sum += (a[i] * b[i]);
		}
		cout << sum << endl;
	}
}
