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
lln TC;
cin>>TC;

while(TC--)
{


string s;
cin>>s;

char a='a';
int f=0;

for(int i=0;i<s.size();i++)
{
  cout<<s[i];

  if(s[i]==s[i+1] and f==0)
  {
      f=1;
    if(s[i]=='z')
    {
      cout<<--s[i];
    }
    else
      cout<<++s[i];
  }
}

if(f==0)
{
  if(s.back()==a)
    cout<<'z';
  else
    cout<<'a';
}
  
cout<<endl;
    
}


return 0;
}