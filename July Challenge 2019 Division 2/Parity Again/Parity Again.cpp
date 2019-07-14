// Partity Again1.cpp : Snehanjan Chatterjee
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
		set<lli> set;
		lli E = 0, O = 0, q, i, ones = 0;
		cin >> q;
		while(q--)
		{
			lli x;
			cin >> x;
			auto res = set.insert(x);
			//cout<<"In Query "<<q<<" x inserted is "<<x<<endl;
			if (not res.second)
			{
			    cout << E << " " << O << endl;
				continue;
			}
			if (res.second)
			{
				ones = __builtin_popcount(x);
				if(ones % 2 != 0)
				    O++;
				else
				    E++;
				//cout<<"Ones in x = "<<ones<<" .So, even = "<<even<<" odd  = "<<odd<<endl;
			}
			for (lli y : set)
			{
				if ((x ^ y) != 0)
				{
					auto res = set.insert(x ^ y);
					if (res.second)
					{
						ones = __builtin_popcount(x^y);
						if(ones % 2 != 0)
        				    O++;
        				else
        				   E++;
        				//cout<<"(x)"<<x<<" ^ (y) "<<y<<" = "<<(x^y)<<" .Ones is = "<<ones<<" .So, even = "<<even<<" odd  = "<<odd<<endl;
					}
				}
			}
			cout << E << " " << O << endl;
		}
	}
}
