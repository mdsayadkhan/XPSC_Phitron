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
    int a,b,c;
    cin>>a>>b>>c;
if((a+b+c)%2==1)
    cout<<-1<<endl;
else
{
    
    
        cout<<min({a+b,(a+b+c)/2})<<endl;
}
    
}


return 0;
}