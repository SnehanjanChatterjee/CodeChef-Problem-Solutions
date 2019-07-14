// Chef and Proxy.cpp : Snehanjan Chatterjee
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int D, i, present = 0, AbsentNotConsidered = 0, TotalAbsent = 0, AbsentConsidered = 0;
		char s[10000];
		cin >> D;
		cin >> s;
		for (i = 0; i < D; i++)
		{
			if (s[i] == 'P')
				present++;
		}
		double MinPresentReqd = ceil(0.75 * D);
		double ProxyReqd = MinPresentReqd - present;
		double ProxyReqd1 = ProxyReqd;
		if (s[0] == 'A') AbsentNotConsidered++;
		if (s[1] == 'A') AbsentNotConsidered++;
		if (s[D-1] == 'A') AbsentNotConsidered++;
		if (s[D-2] == 'A') AbsentNotConsidered++;
		TotalAbsent = D - present;
		AbsentConsidered = TotalAbsent - AbsentNotConsidered;
		if (present >= MinPresentReqd)
			cout << "0" << endl;
		else if (AbsentConsidered < ProxyReqd)
			cout << "-1" << endl;
		else
		{
			for (i = 2; i < (D - 2); i++)
			{
				if (s[i] == 'A')
				{
					if ((s[i - 1] == 'P' || s[i - 2] == 'P') && (s[i + 1] == 'P' || s[i + 2] == 'P'))
						ProxyReqd--;
				}
				if (ProxyReqd == 0)
				{
					cout << ProxyReqd1 << endl;
					break;
				}
			}
			if (ProxyReqd > 0)
				cout << "-1" << endl;
		}
	}
}
