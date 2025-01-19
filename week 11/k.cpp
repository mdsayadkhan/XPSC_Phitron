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
    
lln h,n;
cin>>h>>n;

lln a[n+1],c[n+1];

lln sum=0;

for(int i=1;i<=n;i++) {
    cin>>a[i];
    sum=sum+a[i];
}
for(int i=1;i<=n;i++) {
    cin>>c[i];
    c[i]++;
}

if(sum>=h)
{
    cout<<1<<endl;
    continue;
}
else
{
    h=h-sum;
}

lln lo=0,hi=1e11,mid,ans=-1;

while(lo<=hi)
{
    mid=(lo+hi)/2;

    lln nsum=0;

    for(int i=1;i<=n;i++)
    {
        nsum=nsum+((mid-1)/(c[i]-1))*a[i];
    }

    if(nsum>=h)
    {
        ans=mid;
        hi=mid-1;
    }
    else
        lo=mid+1;


}

cout<<ans<<endl;



}

return 0;
}
