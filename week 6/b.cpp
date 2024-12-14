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
    lln x,y;
    cin>>x>>y;
    lln d=ceil((y*4)/8.0);
    lln c=d*7;
    if(y%2==1)
        c=c+4;

    if(c>=x)
        cout<<d<<endl;
    else
    {
        x=x-c;
        d=d+ceil(x/15.0);
        cout<<d<<endl;
    }

    
}


return 0;
}