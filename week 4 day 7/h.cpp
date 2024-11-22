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
    

lln n,c;
cin>>n>>c;
lln a[n+1];

for(int i=1;i<=n;i++)
{
    cin>>a[i];
    a[i]=a[i]+i;
}

sort(a+1,a+n+1);
int ct=0;

for(int i=1;i<=n;i++)
{
    c=c-a[i];
    if(c>=0) ct++;
    else
        break;
}

cout<<ct<<endl;



}

return 0;
}
