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

int a,b;
cin>>a>>b;
cout<<max({a+b,a+a-1,b+b-1,b+b-1})<<endl;

return 0;
}
