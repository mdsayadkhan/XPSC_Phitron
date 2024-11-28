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
    string s,p;
    cin>>s;
    p=s;
    reverse(p.begin(),p.end());

    if(s<=p)
        cout<<s<<endl;
    else
        cout<<p<<s<<endl;

    
}


return 0;
}