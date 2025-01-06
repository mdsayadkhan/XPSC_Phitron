#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;

int main()
{
time ;
int t;
cin>>t;
while(t--)
{
lln n,m;
cin>>n>>m;
vector<pair<lln,lln>>v(n),p(n);
for(lln i=0;i<n;i++)
{
    cin>>v[i].first;
    v[i].second=i;
}
for(lln i=0;i<n;i++)
{
    cin>>p[i].first;
    p[i].second=i;
}
sort(v.begin(),v.end());
sort(p.begin(),p.end());
lln ar[n];
for(lln i=0;i<n;i++)
    ar[v[i].second]=p[i].first;
for(lln i=0;i<n;i++)
cout<<ar[i]<<" ";
cout<<endl;


}




return 0;



}

