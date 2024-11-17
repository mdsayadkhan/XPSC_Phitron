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

int n,t;
cin>>n>>t;
if(t==0) 
{
    cout<<n<<endl;
    return 0;
}
vector<int>l,r;
while(t--)
{
    string s1,s2,s3,s4;
    int num;

    cin>>s1>>s2>>s3>>s4>>num;

    if(s3=="left")
    {
        l.push_back(num);
    }
    else
        r.push_back(num);



}

sort(l.rbegin(),l.rend());
sort(r.begin(),r.end());

    //cout<<l.back();

    
    int ll,rr;

    if(!l.empty())
    ll=l.back();
    //cout<<ll;
if(!r.empty())
     rr=r.back();
    //cout<<rr<<endl;

    if(l.empty()) 
        {
            if(n-r.back()==0)cout<<-1<<endl;
            else
            cout<<n-r.back()<<endl;
        }
    else if(r.empty())
        {
            if(l.back()-1==0)cout<<-1<<endl;
            else
            cout<<l.back()-1<<endl;
        }
    else
    {
        //cout<<1000<<endl;
        int ans=ll-rr-1;
        if(ans<=0)cout<<-1<<endl;
        else cout<<ans<<endl;
    }


return 0;
}
