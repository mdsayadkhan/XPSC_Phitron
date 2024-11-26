#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;



int main()
{

time ;

int t;
cin>>t;
while(t--)
{
  int a,b;
  cin>>a>>b;
  vector<int>v;

  for(int i=1;i<=a;i++)
    v.push_back(i);
  if(b==0)
  {
    reverse(v.begin(),v.end());
    for(auto x : v)
      cout<<x<<" ";
    cout<<endl;
  }
  else
  {
    cout<<1<<" ";
    for(int i=v.size()-b;i<v.size();i++)
      cout<<v[i]<<" ";
    for(int i=v.size()-b-1;i>0;i--)
      cout<<v[i]<<" ";
    cout<<endl;

  }
}





return 0;
}
