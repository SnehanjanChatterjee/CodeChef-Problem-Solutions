#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n, c=0, d=0, p=0, i ,m=0, pos=0;
		char s[10000000],x[10000000];
		cin >> n;
		cin >> s;
		cin >> x;
		for (i = 0; i < n; i++)
		{
			if (s[i] == x[0])
			{
				pos = i;
				c++;
				m = (i - p);//p=prev position of x,i=current pos, all elements in between can be arranged in m*(m+1)/2 ways 
                    //and in this arrangement x doesnot appear
				d += (m * (m + 1) / 2);
				//cout <<"Pos =" << p << " i = " << i << " d = " << d << " c = " << c << endl;
				p = i + 1;
			}
		}
		if (i == n && pos < i)//cases like abcde b,after getting b ,cde is left
		{
			m = i - (pos + 1);
			d += (m * (m + 1) / 2);
		}
		//cout << i << endl;
		if(c>0)
			cout << ((n * (n + 1) / 2) - d )<< endl;
		else
			cout << "0" << endl;
	}
}



