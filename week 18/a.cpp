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
    

int n,k;
cin>>n>>k;

int c=0,g=0;

for(int i=0;i<n;i++)
{
    int num;
    cin>>num;

    if(num>=k) g=g+num;
    if(num==0 and g>0)
    {
        c++;
        g=g-1;
    }
}
cout<<c<<endl;

}

return 0;
}