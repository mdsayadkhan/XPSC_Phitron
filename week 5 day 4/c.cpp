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
    string a,b,c;
    cin>>a>>b>>c;

    int f=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]!=c[i] and c[i]!=b[i])
        {
            f=1;
            break;
        }
    }

if(f)yes;
else no;



}

return 0;
}
