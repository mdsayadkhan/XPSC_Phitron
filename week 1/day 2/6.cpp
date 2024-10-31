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
    string s;
    cin>>s;

    vector<pair<int,char>>big,sml;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            if(!big.empty())
                big.pop_back();
        }
        else if(s[i]=='b')
        {
            if(!sml.empty())
            sml.pop_back();
    }
        else
        {
            if(s[i]>='a' and s[i]<='z')
                sml.push_back({i,s[i]});
            else
                big.push_back({i,s[i]});
        }


    }
    vector<pair<int,char>>ans;
    for(int i=0;i<sml.size();i++)
        ans.push_back({sml[i].first,sml[i].second});
    for(int i=0;i<big.size();i++)
        ans.push_back({big[i].first,big[i].second});
    sort(ans.begin(),ans.end());
    for(auto x : ans)
        cout<<x.second;
    cout<<endl;
}







return 0;
}