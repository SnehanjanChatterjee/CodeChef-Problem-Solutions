#include <bits/stdc++.h>
using namespace std;
int checkoddorevenfactors(unsigned long long int );
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,i,c=0,d=0,m=0,q=0,r=0,s=0,pow_2=0,pow_3=0,pow_5=0,num=0;
        cin>>n;
        d=checkoddorevenfactors(n);
        if(d==1)
        {
            /*for(i=1;i<=sqrt(n);i++)
            {
                if (n%i == 0)
                {
                    // If divisors are equal, print only one
                    if (n/i == i)
                    {
                        c++;
                        //printf("%d ", i);
                    }
                    else // Otherwise print both
                    {
                        c+=2;
                        //printf("%d %d ", i, n/i);
                    }
                }
            }*/
            m=n;
            while(m%2==0)
            {
                pow_2=q++;
                m/=2;
            }
            while(m%5==0)
            {
                pow_5=s++;
                m/=5;
            }
            while(m%3==0)
            {
                pow_3=r++;
                m/=3;
            }
            num=(q+1)*(r+1)*(s+1);
            //cout<<num<<endl;
            if(num>3)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;

        /*if(c==1 && n>4)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;*/
    }
}
int checkoddorevenfactors(unsigned long long int n)
{
    unsigned long long int nroot = sqrt(n);
    // If n is a perfect square,
    // then it has odd divisors
    if (nroot*nroot==n)
        return 1;//printf("Odd\n");
    else
        return -1;//printf("Even\n");
}
