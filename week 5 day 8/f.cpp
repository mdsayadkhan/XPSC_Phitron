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
cout<<(n/2)+n%2<<endl;

int l=1,r=3*n;
while(l<r)
{
  cout<<l<<" "<<r<<endl;
  l=l+3;
  r=r-3;
}

}

return 0;
}
