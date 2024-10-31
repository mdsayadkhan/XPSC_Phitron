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
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)cin>>a[i];

sort(a+1,a+n+1);
map<int,int>m;

for(int i=1;i<=n;i++)
    m[a[i]]++;

int ans=0;

while(1)
{
    if(m.size()==1)
    {
        ans=ans+m.begin()->second;
        break;
    }
    int mn=0;
    for(auto x:m)
    {
        mn=min(x.second,mn);
    }
    ans=ans+mn;
    for(auto &x:m)
    {
        x.second=x.second-mn;
    }

    for(auto &x:m)
    {
        if(x.second==0)
            {
               
            m.erase(x.first);

            }
    }
}

cout<<ans<<endl;


return 0;
}
