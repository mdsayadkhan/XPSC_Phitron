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
    

    lln n,k;
    cin>>n>>k;

    lln l=1,h=1e10,mid,ans=-1;

    while(l<=h)
    {
        mid=(l+h)/2;

        lln sum=mid-(mid/n);

        if(sum>=k)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }


    }


    cout<<ans<<endl;







}

return 0;
}
