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
int a[26]={0};
string s;
cin>>s;

for(int i=0;i<s.size();i++)
{
    a[s[i]-'a']++;
}

for(int i=0;i<26;i++)
{
    if(a[i]==0)
    {
        cout<<char('a'+i)<<endl;
        return 0;
    }
}
cout<<"None"<<endl;

return 0;
}
