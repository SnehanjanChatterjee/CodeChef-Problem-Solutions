#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q,n,i,j;//k,l;
        cin>>q;
        cin>>n;
        int a[n][n]={0};
        if(q==1)//This is correct pattern number.
        {
            int i_tr=0,i_tl=0,i_bl=0,i_br=0,j_tl=0,j_tr=0,j_bl=0,j_br=0,val=1,m;
            m=n-1;
            for(i=0;i<=n/2;i++)
            {
                i_tl=i;j_tl=i;
                i_tr=i;j_tr=m;
                i_bl=m;j_bl=i;
                i_br=m;j_br=m;
                if(n%2!=0 && i_tl==(n-1)/2)//Middle element
                    a[i_tl][j_tl]=val;
                else if(i%2==0)//clockwise
                {
                    while(i_tr<=m-1)
                    {
                        /*cout<<"i_tl= "<<i_tl<<" j_tl= "<<j_tl<<endl;
                        cout<<"i_tr= "<<i_tr<<" j_tr= "<<j_tr<<endl;
                        cout<<"i_bl= "<<i_bl<<" j_bl= "<<j_bl<<endl;
                        cout<<"i_br= "<<i_br<<" j_br= "<<j_br<<endl;*/
                        a[i_tl][j_tl]=val++;
                        a[i_tr][j_tr]=val++;
                        a[i_br][j_br]=val++;
                        a[i_bl][j_bl]=val++;
                        j_tl++;
                        i_tr++;
                        j_br--;
                        i_bl--;
                        /*for(k=0;k<n;k++)
                        {
                            for(j=0;j<n;j++)
                            {
                                cout<<"a["<<k<<"]["<<j<<"] = "<<a[k][j]<<"\t";
                            }
                            cout<<"\n"<<endl;
                        }
                        cout<<"\n\n";*/
                    }
                }
                else //anti-clockwise
                {
                    while(i_tl<=m-1)
                    {
                        a[i_tl][j_tl]=val++;
                        a[i_bl][j_bl]=val++;
                        a[i_br][j_br]=val++;
                        a[i_tr][j_tr]=val++;
                        i_tl++;
                        j_bl++;
                        i_br--;
                        j_tr--;
                    }
                    /*for(k=0;k<n;k++)
                    {
                        for(j=0;j<n;j++)
                        {
                            cout<<"a["<<k<<"]["<<j<<"] = "<<a[k][j]<<"\t";
                        }
                        cout<<"\n"<<endl;
                    }
                    cout<<"\n\n";*/
                }
                m--;
            }
        }
        else
        {
            int m=0,val=1,i_tl=0,j_tl=0,i_br=0,j_br=0,c=0;
            m=n-1;
            j=0;
            i=m;
            while(val<=n*n)
            {
                i_tl=0;j_tl=j;
                //cout<<"i_tl= "<<i_tl<<" j_tl= "<<j_tl<<" val="<<val<<endl;
                c=j_tl;
                while(i_tl<=c)
                {
                    //cout<<"Inside while val= "<<val<<endl;
                    a[i_tl][j_tl]=val++;
                    i_tl++;
                    j_tl--;
                }
                if(i_tl==n && j_tl==-1)
                    break;
                //cout<<"\n";
                i_br=i;j_br=m;
                //cout<<"i_br= "<<i_br<<" j_br= "<<j_br<<" val="<<val<<endl;
                c=j_br;
                while(i_br<=c)
                {
                    //cout<<"Inside while val= "<<val<<endl;
                    a[i_br][j_br]=val++;
                    i_br++;
                    j_br--;
                }

                j++;i--;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        //cout<<j_tl<<j_tr<<j_bl<<j_br<<b<<endl;
    }
}
