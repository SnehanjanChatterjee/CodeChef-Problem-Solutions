#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  long int c[100000],t[100000],C1,C2,C3,T,min1,min2,min3;
  int N,i,d=0,e=0,f=0;
  //printf("Enter no of workers");
  scanf("%d",&N);
  //input coins//
  for(i=0;i<N;i++)
  {
   // printf("c[%d]",i);
    scanf("%ld",&c[i]);
  }
  //input types of workers//
  for(i=0;i<N;i++)
  {
   // printf("t[%d]",i);
    scanf("%ld",&t[i]);
  }
  for(i=0;i<N;i++)
  {
      T=t[i];
      switch(T)
      {
          case 1 :
              C1=c[i];
              d++;
              if(d==1)
              {
                 min1=C1;
              }
              else
                if(C1<min1)
                min1=C1;
              break;
          case 2 :
              C2=c[i];
              e++;
              if(e==1)
              {
                 min2=C2;
              }
              else
                if(C2<min2)
                min2=C2;
              break;
          case 3 :
              C3=c[i];
              f++;
              if(f==1)
              {
                 min3=C3;
              }
              else
                if(C3<min3)
                min3=C3;
              break;
      }
  }
   if((min1+min2)>min3)
        printf("%ld\n",min3);
   else if((min1+min2)<min3)
        printf("%ld\n",min1+min2);
   else
        printf("%ld\n",min3);
}

