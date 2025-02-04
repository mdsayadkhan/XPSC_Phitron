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
for(auto &x:a)cin>>x;
map<int,int>m;

int ans=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
{
	m[a[i]+a[j]]++;
	ans=max(ans,m[a[i]+a[j]]);
}

cout<<ans<<endl;

return 0;
}
