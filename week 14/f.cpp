#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;


int main()
{
time ;

string s;
cin>>s;
int ct=0;


for(int i=1;i<s.size();i++ )
{
    if(s[i]==s[i-1])
    {
        
        ct++;
        s.erase(i-1,2);

       
        i=i-2;


        

        
    }
}

//cout<<s<<endl;

if(ct%2==1)yes;
else no;

return 0;
}
