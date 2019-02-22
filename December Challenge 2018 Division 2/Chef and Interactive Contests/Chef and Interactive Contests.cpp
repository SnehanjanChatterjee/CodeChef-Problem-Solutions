#include <iostream>

using namespace std;

int main()
{
   long int N,r,R;
   cin>>N>>r;
   for(int i=0;i<N;i++)
   {
       cin>>R;
       if(R>=r)
        cout<<"Good boi"<<endl;
       else if(R<r)
        cout<<"Bad boi"<<endl;
   }
   return 0;
}
