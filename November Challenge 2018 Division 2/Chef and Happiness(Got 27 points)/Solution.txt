#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T!=0)
    {
        int N,i,j;
        cin>>N;
        int A[N];
        for(i=1;i<=N;i++)
            cin>>A[i];
        int c=0;
        for(i=1;i<=N;i++)
        {
            for(j=N;j>=i+1;j--)
            {
               	if(A[i]!=A[j] && A[A[i]]==A[A[j]])
               	{
                 	c=1;
                 	cout<<"Truly Happy"<<endl;
                 	break;
                }
            }
            if(c==1)
            	break;
        }
        if(c==0)
            cout<<"Poor Chef"<<endl;
        T--;
    }
}
