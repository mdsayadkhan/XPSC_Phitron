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
int a[n];
for(auto &x:a)cin>>x;

lln l=0,h=n,mid,ans;

while(l<=h)
{

    multiset<int>s(a,a+n);
    mid=(l+h)/2;

    int f=0;

    for(int i=mid;i>=1;i--)
    {
        if(s.empty())
        {
            f=1;
            break;
        }
        auto pos=s.upper_bound(i);

        if(pos==s.begin())
        {
            f=1;
            break;
        }

        pos--;

        s.erase(pos);

        if(!s.empty())
        {
           
            int x=*s.begin()+i;
            s.erase(s.begin());
            s.insert(x);

        }
    }



if(f==0)
{
    ans=mid;
    l=mid+1;
}
else
{
    h=mid-1;
}


        
}
cout<<ans<<endl;
}
        
        
       







return 0;
}
