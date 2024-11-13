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

vector<string>v;

while(TT--)
{
	
string s;
cin>>s;
v.push_back(s);




}

//vector<char>l;
set<string>st;

for(int i=v.size()-1;i>=0;i--)
{
	string p=v[i];

	if(st.find(p)==st.end())
	{

   cout<<p[p.size()-2]<<p[p.size()-1];
   st.insert(p);
	}
}
cout<<endl;

return 0;
}
