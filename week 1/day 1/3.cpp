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

    int n;
    cin>>n;
    string s;
    cin>>s; 
    //n=s.size();
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            p=i+1;
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
            q=i+1;
    }
    if(p!=0 and q!=0)
    cout<<(q-p+1)<<endl;
else
    cout<<0<<endl;

    
}


return 0;
}