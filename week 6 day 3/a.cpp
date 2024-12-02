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
  deque<int>d;

  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    d.push_back(num);
  }


    int c=0;
    for(int i=0;i<n-1;i++)
    {
      if(d[i]>d[i+1])
        c++;
    }

  if(c==0)
    cout<<"YES"<<endl;
  else if(c>1)
    cout<<"NO"<<endl;
  else
  {
    if(c==1 and d.back()<=d.front())
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
      
    

  
  }





    



return 0;
}