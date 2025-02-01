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
    int n,k;
    cin>>n>>k;
    string s[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }

    for(int i=1;i<=n;i=i+k)
    {
        for(int j=0;j<n;j=j+k)
        {
            cout<<s[i][j];
        }
cout<<endl;
    }
}

return 0;
}
