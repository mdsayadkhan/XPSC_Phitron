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

int n;
cin>>n;

int pos=0;
set<int>s;
s.insert(-1);

for(int i=1;i<=n;i++)
{
    int num;
    cin>>num;
   // cout<<*s.rbegin()<<endl;

    if(s.count(num)==1 or *s.rbegin()+1==num)
        {
            s.insert(num);
        }
    else
    {
        cout<<i<<endl;
        return 0;
    }
}

cout<<-1<<endl;


return 0;
}
