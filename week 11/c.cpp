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
    

int n;
cin>>n;
string s;
cin>>s;

map<char,int>m;
for(int i=0;i<s.size();i++)
{
    m[s[i]]++;
}

lln ans=0;

for(auto x:m)
{
    ans=ans+min(x.second,n);
}
cout<<ans<<endl;


}

return 0;
}
