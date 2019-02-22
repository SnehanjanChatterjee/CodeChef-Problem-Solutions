#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cint;
    while(t!=0)
    {
        long long int N,P,c=0,max1=0,value=0,ways=0,way1=0,way2=0,way3=0,i,j,k,r=0;
        cinNP;
        max1=(N%((N2)+1));
        if(N=100 && P=100 && t=100)
        {
            for(i=1;i=P;i++)
            {
                for(j=1;j=P;j++)
                {
                    for(k=1;k=P;k++)
                    {
                        value=(((N%i)%j)%k)%N;
                        if(i==1 && j==1 && k==1)
                        {
                            max1=value;
                            ways=1;
                        }
                        else if(valuemax1)
                        {
                            max1=value;
                            if(max10)
                            {
                                coutvalue= value at (i,j,k)endl;
                                c++;
                            }
                            ways=1;
                        }
                        else if(value==max1)
                        {
                            max1=value;
                            coutvalue= value at (i,j,k)endl;
                            ways++;
                        }
                    }
                }
            }
        }
        else
        {
            if(N==P)
            {
                i=(N2)+1;
                c=(P-((N%i)+1))+1;
                j=c;
                k=c;
                ways=pow(c,2);
                couti= i j= j k= kendl;
            }
            if(PN)
            {
                i=(N2)+1;
                c=(P-((N%i)+1))+1;
                j=c;
                k=c;
                way1=pow(c,2);
                couti= i j= j k= kendl;

                j=(N2)+1;
                i=(P-(N+1))+1;
                c=(P-((N%j)+1))+1;
                k=c;
                way2=(P-N)c;
                couti= i j= j k= kendl;

                k=(N2)+1;
                i=(P-(N+1))+1;
                j=i;
                way3=pow((P-N),2);

                ways=way1+way2+way3;
                r=pow(10,9)+7;
                ways=ways%r;
                couti= i j= j k= kendl;
            }
        }
        coutmax= max1 No of ways= waysendl;
        coutwaysendl;
        t--;
    }
}
