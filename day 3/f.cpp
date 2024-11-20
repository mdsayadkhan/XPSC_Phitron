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
    

int a,b,c;
cin>>a>>b>>c;

int x=a-1;
int y=abs(b-c)+c-1;

//cout<<x<<" "<<y<<endl;

if(x==y)cout<<3<<endl;
else if(x>y) cout<<2<<endl;
else cout<<1<<endl;


}

return 0;
}
