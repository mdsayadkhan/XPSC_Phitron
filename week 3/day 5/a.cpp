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

int x,y,z;
cin>>x>>y>>z;

int m=4-(x+y+z);

if(x+m>z) yes;
else no;



return 0;
}
