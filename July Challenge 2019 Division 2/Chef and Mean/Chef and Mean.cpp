// Chef and Mean.cpp :
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin >> t;
	while (t--)
	{
		ulli n, i;
		cin >> n;
		ulli a[100000],sum = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		double mean = (double)((double)sum / (double)n);
		//cout<<"Sum = "<<sum<<" mean = "<<mean<<" n = "<<n<<endl;
		//sort(a, a + n);
		bool flag = false;
		for (i = 0; i < n; i++)
		{
			if ((double)(((double)sum - (double)a[i]) / (double)(n - 1)) == mean)
			{
			    //cout<<"((Sum) "<<sum<<" - (a["<<i<<"]) "<<a[i]<<")/ "<<n-1<<" = "<<mean<<endl;
				cout << i + 1 << endl;
				flag = true;
				break;
			}
		}
		if (flag == false)
			cout << "Impossible" << endl;
	}
}
