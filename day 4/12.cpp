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
    string s;
    cin>>s;
    set<char>st(s.begin(),s.end());
   string p(st.begin(),st.end());

map<char,char>m;
if(p.size()%2==1)
m[p[p.size()/2]]=p[p.size()/2];

for(int i=0;i<p.size()/2;i++)
{
    m[p[i]]=p[p.size()-1-i];

}
reverse(p.begin(),p.end());
for(int i=0;i<p.size()/2;i++)
{
    m[p[i]]=p[p.size()-1-i];

}

for(int i=0;i<n;i++)
    s[i]=m[s[i]];
cout<<s<<endl;

    
}


return 0;
}