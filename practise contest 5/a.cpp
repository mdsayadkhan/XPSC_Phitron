#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;


int main()
{
time ;
lln TC;
cin>>TC;

while(TC--)
{
    int n,m;
    cin>>n>>m;
    
    int ans=0;

    while(n!=1)
    {
        ans=ans+n/2;
        if(n%2==1)
            n++;
        n=n/2;
    }

    

    // cout<<ans<<" "<<m<<endl;
    if(ans>=m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}


return 0;
}