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
    
lln n,m;
cin>>m;
n=(m*(m-1))/2;
lln a[n+1];

for(int i=1;i<=n;i++)
{
    cin>>a[i];
}

sort(a+1,a+n+1);

int j=1,k=m-1;

for(int i=1;i<=n;i++)

{
    if(i==j)
    {


    cout<<a[i]<<" ";
    j=j+k;
    k--;

    } 

}
cout<<a[n]<<endl;



}

return 0;
}
