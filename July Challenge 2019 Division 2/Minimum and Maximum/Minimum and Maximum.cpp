// Maximum and Minimum2.cpp :
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
lli a[10000000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin >> t;
	while (t--)
	{
		lli n, k, s21 = 0, s22 = 0, j1 = 0, j2 = 0, i = 0;
		vector <lli> v1, v2;
		cin >> n >> k;
		if(n%k==0)
		    cout<<"0"<<endl;
		else
		{
		    lli m = k / n;
		    lli rem = k % n;
    		for (i = 0; i < n; i++)
    			a[i] = m;
    		for (i = 0; i < rem; i++)
    			a[i]+=1;
    		sort(a, a + n);
    		j2 = n - 1;
    		while (j1 <= j2) 
    		{
    			v1.push_back(a[j1]);
    			v2.push_back(a[j2]);
    			if (j1 != j2) v1.push_back(a[j2]),v2.push_back(a[j1]);
    			j1++;
    			j2--;
    		}
    		for (i = 0; i < n - 1; i++) 
    		{
    			s21 += abs(v1[i] - v1[i + 1]);
    			s22 += abs(v2[i] - v2[i + 1]);
    		}
    		if (s21 < s22)
    			cout << s22 << endl;
    		else
    			cout << s21 << endl;
		}
	}
}
