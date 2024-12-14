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
    int c=n-m;
    if(c==0)
        cout<<"YES"<<endl;
    else if(c<0)
        cout<<"NO"<<endl;
    else if(c%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    
}


return 0;
}