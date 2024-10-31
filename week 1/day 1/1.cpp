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

set<pair<string,string>>st;
int TT;
cin>>TT;

while(TT--)
{
    string s,p;
    cin>>s>>p;
    pair<string,string>d;
    d.first=s;
    d.second=p;

    st.insert(d);

    




}
cout<<st.size()<<endl;

return 0;
}
