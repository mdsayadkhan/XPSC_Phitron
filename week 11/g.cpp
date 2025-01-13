#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;

lln ans(lln a[],lln mid,lln w,lln n)
{
    lln sum=0;

        for(int i=0;i<n;i++)
        {
            if(mid>a[i])
                sum=sum+(mid-a[i]);
            else
                break;
            
        }
    
    return sum;
}
   

int main()
{

time ;

lln t;
cin>>t;
while(t--)
{

    
    lln n,w;
    cin>>n>>w;
    lln a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    lln lo=1,hi=1e10,mid;

    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        

      

        if(ans(a,mid,w,n)<=w)
        {

          lo=mid;
        }
        else
            hi=mid-1;
    }
    //cout<<lo<<" "<<hi<<endl;
    if(ans(a,hi,w,n)<=w)
        cout<<hi<<endl;
    else
        cout<<lo<<endl;

}





return 0;
}