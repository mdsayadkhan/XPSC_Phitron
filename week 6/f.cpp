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
    lln n;
    cin>>n;

    lln a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    lln b[n+1],c[n+1];
b[0]=0;

for(int i=1;i<=n;i++)
{
    b[i]=b[i-1]+a[i];
}
lln mx=0;
for(int i=1;i<=n;i++)
{
    mx=max(mx,a[i]);
    c[i]=mx;
}

int ct=0;

for(int i=1;i<=n;i++)
{
    if(c[i]*2==b[i])ct++;
}
cout<<ct<<endl;
    
}


return 0;
}