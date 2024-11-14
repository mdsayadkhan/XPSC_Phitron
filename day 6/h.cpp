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
int m=n;
string s;
cin>>s;
s='0'+s;

vector<int>v,p;
for(int i=1;i<=n/2;i++)
{
    if(s[i]=='L')
    {
        v.push_back(n-i);
        p.push_back(i-1);
    }

}

for(int i=((n+1)/2)+1;i<=n;i++)
{
    if(s[i]=='R') 
    {
        v.push_back(i-1);
        p.push_back(n-i);
    }
}

sort(v.begin(),v.end());
sort(p.rbegin(),p.rend());
lln ans=0;

for(int i=1;i<=n;i++)
{
    if(s[i]=='L') ans=ans+i-1;
    else ans=ans+n-i;
}

int ct=n-v.size();
int c=v.size();

while(c--)
{
    ans=ans+v.back()-p.back();
    v.pop_back();
    p.pop_back();
    cout<<ans<<" ";
}

while(ct--)
{
cout<<ans<<" ";
}
cout<<endl;

}

return 0;
}
