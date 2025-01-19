#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;


int main()
{
time ;

int TT;
cin>>TT;

while(TT--)
{
    
lln n;
cin>>n;

lln lo=1,hi=1e10,mid,ans;

while(lo<=hi)
{
    mid=(lo+hi)/2;
    //mid--;

    lln sum=(mid*(mid+1))/2;

    if(sum<=n)
    {
        ans=mid;
        lo=mid+1;
    }
    else
    {
        hi=mid-1;
    }

    
}

ans=ans+1+n-(ans*(ans+1))/2;
cout<<ans<<endl;



}

return 0;
}
