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

int a,b,c;
cin>>a>>b>>c;

if(b/c>=1)
{
    if((b/c)*c>=a)
        cout<<((b/c)*c)<<endl;
    else
        cout<<-1<<endl;
}
else
cout<<-1<<endl;


return 0;
}
