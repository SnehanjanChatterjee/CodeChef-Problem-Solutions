#include <iostream>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int N,Q,K,max1,c=0,temp;
    int i,j;
    cin>>N>>Q>>K;
    char s[Q];
    int a[N];
    for(i=0;i<N;i++)
        cin>>a[i];
    cin>>s;
    //printf("%c\n",s[0]);    /*working*/
    for(i=0;i<strlen(s);i++)
    {
        max1=0;
        c=0;
        switch(s[i])
        {
            case '!':  temp=a[N-1];
                        for(j=N-1;j>0;j--)
                        {
                            a[j]=a[j-1];
                        }
                        a[0]=temp;
                        break;
            case '?':   for(j=0;j<N;j++)
                        {
                            if(a[j]==0)
                                c=0;
                            else
                                c+=1;
                            if(c>max1 && c<=K)
                                max1=c;
                            if(c>K)
                            	break;
                        }
                        cout<<max1<<endl;
        }
    }
}

