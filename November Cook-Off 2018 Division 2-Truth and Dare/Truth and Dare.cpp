#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T!=0)
    {
        int i,j,tr,ts,dr,ds,TR[1000],DR[1000],TS[1000],DS[1000],truth,dare;
        cin>>tr;
        for(i=0;i<tr;i++)
        {
            cin>>TR[i];
        }
        cin>>dr;
        for(i=0;i<dr;i++)
        {
            cin>>DR[i];
        }
        cin>>ts;
        for(i=0;i<ts;i++)
        {
            cin>>TS[i];
        }
        cin>>ds;
        for(i=0;i<ds;i++)
        {
            cin>>DS[i];
        }
        truth=0;
        dare=0;
        for(i=0;i<ts;i++)
        {
            for(j=0;j<tr;j++)
            {
                if(TS[i]==TR[j])
                {
                    truth=truth+1;
                    //TR[j]=200;
                    j=tr;
                    //break;
                }
            }
        }
        //cout<<"ts= "<<ts<<"\t"<<"tr= "<<tr<<"\t"<<"truth= "<<truth<<"\t";
        for(i=0;i<ds;i++)
        {
            for(j=0;j<dr;j++)
            {
                if(DS[i]==DR[j])
                {
                    dare=dare+1;
                    //DR[j]=200;
                    j=dr;
                    //break;
                }
            }
        }
        //cout<<"ds= "<<ds<<"\t"<<"dr= "<<dr<<"\t"<<"dare= "<<dare<<"\t";
        if(truth==ts && dare==ds)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
        T=T-1;
    }
}
