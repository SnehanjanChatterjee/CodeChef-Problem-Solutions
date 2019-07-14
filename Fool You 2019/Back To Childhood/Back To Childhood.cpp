#include <bits/stdc++.h>
using namespace std;
int main() 
{
	long int t;
	cin>>t;
	while(t--)
	{
	    char s[1000];
	    int dc=0,mc=0,i;
	    bool flag=false;
	    cin>>s;
	    for(i=0;i<=strlen(s);i++)
	    {
	        if(s[i]=='/')
	        {
	            dc++;
	        }
	        if(s[i]=='*')
	        {
	            mc++;
	            //if(dc>0)
	             //   dc--;
	            if(dc<mc)
	            {
	                flag=true;
	                break;
	            }
	        }
	    }
	    if(flag)
	        cout<<"Irregular since Childhood."<<endl;
	    else
	        cout<<"Regular since Childhood."<<endl;
	}
	return 0;
}
