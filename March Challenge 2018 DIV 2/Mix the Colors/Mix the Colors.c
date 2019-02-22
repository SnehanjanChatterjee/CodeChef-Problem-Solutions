#include <stdio.h>
#include <string.h>
int main()
{
    int T,i,j,p,N ; 
    double a[100];
    //printf("No of Test Cases");
	scanf("%d",&T);
	while(T!=0)
	{
		p=0;
		//printf("No Of Colors");
		scanf("%d", &N);
		for(i=0;i<N;i++)
        {
            //printf("a[%d]",i);
            scanf("%lf",&a[i]);
        }
		for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(i==j)
                continue;
                if(a[i]==a[j])
            {
                a[i]=a[i]+a[i+1];
                p++;
            }
            }
        }
		printf("%d\n",p);
		T--;
	}
}
