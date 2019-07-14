#include<bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
ulli RoundNumber(ulli ); 
ulli sum(ulli );
int main() 
{ 
     ulli t;
     cin>>t;
     while(t--)
     {
        ulli n;
        cin>>n;
        cout<<RoundNumber(n)<<endl;
     }
}
ulli sum(ulli n) 
{ 
    ulli sum = 0; 
    while(n!=0) 
    { 
        sum += n % 10; 
        n /= 10; 
    } 
    if(sum % 10 == 0) 
        return 0;
    else if(sum < 10)
        return 10 - sum;
    return 10 - (sum % 10);
}
ulli RoundNumber(ulli n) 
{ 
    return (n*10+sum(n));
} 
