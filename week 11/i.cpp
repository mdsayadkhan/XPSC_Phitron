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
    
int k,n;
cin>>k>>n;
int a[n+1];

for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=k-a[i];
    }

sort(a+1,a+n+1);
lln b[n+1];
b[0]=0;

for(int i=1;i<=n;i++)
{
    b[i]=b[i-1]+a[i];
}


k--;

lln l=1,h=n,mid,ans;

while(l<=h)
{
    mid=(l+h)/2;

    if(b[mid]<=k)
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





}

return 0;
}
