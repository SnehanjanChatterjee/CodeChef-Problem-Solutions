#include <iostream>

using namespace std;

int interact(int ,int ,int ,int );

int main()
{
    int N,c;
    cin>>N;
    cin>>c;
    int res=interact(1,N,1000,c);
    cout<<"3"<<" "<<res<<flush<<endl;
    return 0;
}
int interact(int l,int y,int c,int d)///initially l=1, y=N, c=1000, d=c
{
    int x,mid;
    mid=(l+y)/2;
    if(c-1>=0)
    {
        if(l<y)
        {
            cout<<"1"<<" "<<mid<<flush<<endl;
            c=c-1;
            cin>>x;
            if(x==1)
            {
                if(c-d>=0)
                {
                    cout<<"2"<<flush<<endl;
                    c=c-d;
                    interact(l,mid,c,d);
                }
                else
                    return(mid);
            }
            else if(x==0)
                interact(mid+1,y,c,d);
            else if(x==-1)
                return(mid);
        }
        else
            return(y);
    }
    else
        return(mid);
}
