#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5
double loss,d,c;
int main()
{
   int N,j,T;
   double a[MAX];
   //printf("Enter no of test cases");
   scanf("%d",&T);
   while(T!=0)
   {
       c=0;
       d=0;
       loss=0;
       //printf("Enter no of recipes");
       scanf("%d",&N);
      // for(k=0;k<N;k++)
       while(N!=0)
       {
         for(j=0;j<3;j++)
         {
          // printf("Enter value of a[%d]",j);
             scanf("%lf",&a[j]);
         }
         c=(a[0]*(1+(a[2]*0.01)));
         d=c*(1-(a[2]*0.01));
         loss=loss+(a[1]*(a[0]-d));
     // printf("%f\n",loss);
         N--;
       }
       printf("%lf\n",loss);
       T--;
   }
}

