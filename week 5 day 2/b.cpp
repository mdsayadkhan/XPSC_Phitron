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
    int n;
    cin>>n;
    int a[n];
    for(auto &x:a)cin>>x;
    int b[26]={0},j;
string s="";
for(int i=0;i<n;i++)
{
    for(j=0;j<26;j++)
    {
        if(a[i]==b[j])
        {
            char c=(j+'a');
            cout<<c;
            b[j]++;
            break;
        }
    }
}

cout<<endl;

    
}


return 0;
}