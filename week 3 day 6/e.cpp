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
	
	lln n,m,h;
	cin>>n>>m>>h;

	vector<lln>vn,vm;

	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		vn.push_back(num);
	}

    for(int i=0;i<m;i++)
	{
		int num;
		cin>>num;
		vm.push_back(num*h);
	}

sort(vn.rbegin(),vn.rend());
sort(vm.rbegin(),vm.rend());

lln sum=0;
for(int i=0;i<min(n,m);i++)
sum=sum+min(vn[i],vm[i]);



cout<<sum<<endl;


}

return 0;
}
