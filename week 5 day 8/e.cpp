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
int c0=0,c1=0,c2=0;

for(int i=0;i<n;i++)
{
    int num;
    cin>>num;

    if(num==0)c0++;
    else if(num==1)c1++;
    else c2++;
}

if(c0<=n-c0+1) cout<<0<<endl;
else
{
    if(c0==n)cout<<1<<endl;
    else if(c2==0)cout<<2<<endl;
    else cout<<1<<endl;

}



}

return 0;
}
