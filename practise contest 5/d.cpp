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
    lln n,f,l;
    cin>>n;
    if(n%2==0)
    {
        f=1;
        l=n;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                cout<<f<<" ";
                f++;
            }
            else
            {
                cout<<l<<" ";
                l--;
            }
        }
        cout<<endl;
    }
    else
    {
        f=1;
        l=n-1;

        for(int i=1;i<=n-1;i++)
        {
            if(i%2==1)
            {
                cout<<f<<" ";
                f++;
            }
            else
            {
                cout<<l<<" ";
                l--;
            }
        }
        cout<<n<<endl;

    }

    
}


return 0;
}