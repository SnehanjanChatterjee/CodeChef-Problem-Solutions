#include <stdio.h>
#include <stdlib.h>

int main()
{
   double f[100000],g[100000],N;
   int j,k,T,c,d;
   //printf("Enter no of test cases");
   scanf("%d",&T);
   while(T!=0)
   {
       c=0;
       d=0;
       //printf("Enter no of fingers");
       scanf("%lf",&N);
       for(j=0;j<N;j++)
       {
           //printf("Enter value of f[%d]",j);
           scanf("%lf",&f[j]);
       }
       for(j=0;j<N;j++)
       {
           //printf("Enter value of g[%d]",j);
           scanf("%lf",&g[j]);
       }
       for(j=0;j<N;j++)
       {
           if(f[j] < g[j] || f[j]==g[j])
            c++;
       }
       for(j=N-1,k=0;j>=0;j--,k++)
       {
                if(f[k]<g[j] || f[k]==g[j])
                d++;
       }
      if(c==N && d!=N)
        printf("front\n");
      else if(d==N && c!=N)
        printf("back\n");
      else if(c==N && d==N)
        printf("both\n");
      else
        printf("none\n");
      T--;
   }
}
