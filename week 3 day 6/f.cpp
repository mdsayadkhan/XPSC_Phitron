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
vector<int>v;

for(int i=0;i<n;i++)
{
	int num;
	cin>>num;
	v.push_back(num);
}

reverse(v.begin(),v.end());
set<int>s;
int c=0;
for(auto x:v)
{
	if(s.find(x)==s.end())
	{
		c++;
		s.insert(x);
	}
	else
		break;
}
cout<<n-c<<endl;

}

return 0;
}
