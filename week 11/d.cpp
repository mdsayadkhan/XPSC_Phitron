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

lln n,k;
cin>>n>>k;

lln a[n];
for(auto &x:a)cin>>x;
sort(a,a+n);

lln b[n/2+5];

for(int i=n/2;i<n;i++)
{
    b[i-n/2+1]=a[i];
}

//for(int i=1;i<=(n+1)/2;i++)cout<<b[i]<<" ";

n=(n+1)/2;

lln l=1,h=1e10,mid,ans=-1;

while(l<=h)
{
    mid=(l+h)/2;

    lln sum=0;
    for(int i=1;i<=n;i++)
    {
        if(mid>b[i])
        {
            sum=sum+mid-b[i];
        }
        else
            break;

    }

    if(sum<=k)
    {
        ans=mid;
        l=mid+1;
    }
    else
    {
        h=mid-1;

    }
}

cout<<ans<<endl;

return 0;
}
