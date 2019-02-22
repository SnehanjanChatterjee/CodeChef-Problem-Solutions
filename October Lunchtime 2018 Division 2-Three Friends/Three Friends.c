#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T!=0)
    {
        int X,Y,Z,x,y,z,c=0;
        scanf("%d %d %d",&X,&Y,&Z);
        x=X;
        y=Y;
        z=Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        x=-X;
        y=Y;
        z=Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        x=X;
        y=-Y;
        z=Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        x=X;
        y=Y;
        z=-Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        x=-X;
        y=-Y;
        z=Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        x=-X;
        y=Y;
        z=-Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        x=X;
        y=-Y;
        z=-Z;
        if(x+y+z==0 && c==0)
        {
            c=1;
            printf("yes\n");
        }
        if(c==0)
        {
            printf("no\n");
        }
        T--;
    }
}
