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
    int n;
    cin>>n;
    string s;
    cin>>s;

    s.erase(unique(s.begin(),s.end()),s.end());
    //cout<<s;
    int a=count(s.begin(),s.end(),'0');
    int b=s.size()-a;
    cout<<min(a,b)<<endl;

    
}


return 0;
}
