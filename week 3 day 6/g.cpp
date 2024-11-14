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
   
   string s,p;
   cin>>s>>p;

   char n,m;
   n=s.back(); 
   m=p.back(); 


if(n!=m)
{
    if(n<m) cout<<'>'<<endl;
    else cout<<'<'<<endl;
}
else
{
    if(n=='S')
        if(s.size()==p.size())cout<<'='<<endl;
        else if(s.size()>p.size()) cout<<'<'<<endl;
        else cout<<'>'<<endl;
    else
    {
    if(s.size()==p.size())cout<<'='<<endl;
    else if(s.size()>p.size()) cout<<'>'<<endl;
        else cout<<'<'<<endl;

    }
}



}

return 0;
}
