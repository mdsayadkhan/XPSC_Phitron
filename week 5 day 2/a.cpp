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

string a="AAA",b="BBB";
if(n%2==1)
cout<<"NO"<<endl;
else if(n==2)
cout<<"YES"<<endl<<"AA"<<endl;


else
{
  cout<<"YES"<<endl;
  
    
  for(int i=1;i<=n/2;i++)
  {
    cout<<a;
    swap(a,b);
  }
  
    cout<<endl;

}
}

return 0;
}