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
    int n,q;
    cin>>n>>q;
    if(min(n,q)<3)
    {
        cout<<min(n,q)<<endl;
        continue;
    }

    int c=0;
    while((n>0 and q>0))
    {
        if(n%3==0 or q%3==0)
            break;
        c++;
        n--;
        q--;
    }
cout<<c<<endl;
    
}


return 0;
}
