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

lln a[n],c1=0,sum=0;

for(int i=0;i<n;i++)
{
    cin>>a[i];

    if(a[i]==1) c1++;

    sum=sum+a[i];
}

lln c2=n-c1;

sum=sum-2*c1;
if(n==1)no;
else if(sum>=(n-c1))yes;
else no;




}

return 0;
}
