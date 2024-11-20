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
    
int mx,in,b;
cin>>mx>>in>>b;

lln ans=in;
for(int i=0;i<b;i++)
{
    int x;
    cin>>x;
    ans=ans+min(mx-1,x);

}
cout<<ans<<endl;


}

return 0;
}
