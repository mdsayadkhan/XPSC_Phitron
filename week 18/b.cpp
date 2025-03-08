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
    
int n,k;
cin>>n>>k;

int m=n-k;


if (n%2==0)
{
    
    k=k/2;
    
}
else
{
    k=ceil(1.0*k/2);
}

if(k%2==0) yes;
else no;
}

return 0;
}