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
string s;
cin>>s;
vector<char>v;
reverse(s.begin(),s.end());
for(int i=0;i<s.size();i++)
{
	if(s[i]=='a' or s[i]=='e')
	{
		//cout<<s[i]<<s[i+1]<<'.';
		v.push_back(s[i]);
		v.push_back(s[i+1]);
		v.push_back('.');
		i++;
	}
	else
	{
		v.push_back(s[i]);
		v.push_back(s[i+1]);
		v.push_back(s[i+2]);
		v.push_back('.');
		i=i+2;
	}
}

v.pop_back();
reverse(v.begin(),v.end());
for(auto x:v)cout<<x;
	cout<<endl;

}

return 0;
}
