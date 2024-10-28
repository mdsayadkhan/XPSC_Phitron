#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;


int main()
{
time ;

int n;
cin>>n;
vector<string>v(n);
for(auto &x:v)cin>>x;
    map<string,int>m;
for(int i=0;i<n;i++)
    m[v[i]]++;

vector<string>ans;

for(int i=n-1;i>=0;i--)
{
    if(m[v[i]]>1)
    {
      string s;
      s=v[i];
      s=s+to_string(m[v[i]]-1);
      m[v[i]]--;
      ans.push_back(s);
    }
    else
        ans.push_back("OK");

}

reverse(ans.begin(),ans.end());
for(auto x : ans)
    cout<<x<<endl;


return 0;
}