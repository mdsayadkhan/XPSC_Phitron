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
    int n,m;
    cin>>n>>m;
    set<string>s;

    for(int i=0;i<n;i++)
    {
        string ss;
        cin>>ss;
        s.insert(ss);
    }

    vector<string>v;
    string p="";
    for(int i=0;i<m;i++)
        p='0'+p;
    string q=p;


    for(int i=0;i<m;i++)
    {
        p[i]='1';
        v.push_back(p);
        p=q;
    }


    ;
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(s.find(v[i])==s.end())
        {
            ans=1;
            //cout<<v[i];
            break;
        }
    }
if(ans==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


    
}


return 0;
}