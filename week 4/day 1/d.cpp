#include<bits/stdc++.h>
using namespace std;
#define lln  long long int
#define endl "\n"
#define time ios_base::sync_with_stdio(false);cin.tie(NULL);
const int M=1e9+7;

    
int main()
{
time ;

int t;
cin>>t;
while(t--)
{
    int n,one,tk,total;
    cin>>n>>one>>tk>>total;

    int num=total/tk;
    if(n<=num)
        num=n;
    //cout<<num<<endl;
    
    if(num*tk+one>=total)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
    


return 0;
    
}