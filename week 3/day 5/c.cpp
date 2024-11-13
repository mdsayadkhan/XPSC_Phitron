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
    int a[n];
    for(auto &x:a)cin>>x;

    set<int>s(a,a+n);

if(s.size()==1) yes;
else if(s.size()==2 and s.find(0)!=s.end()) yes;
else no;




}

return 0;
}
