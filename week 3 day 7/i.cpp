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

vector<int>v[101];
set<int>s;

int m=n-1;
while(n--)
{
    vector<int>p;
    int num;

    for(int i=1;i<m;i++)
    {
        cin>>num;
        p.push_back(num);
    }

    cin>>num;
    s.insert(num);

    for(int i=0;i<p.size();i++)
    {
        v[num].push_back(p[i]);
    }

    v[num].push_back(num);

        
        
}

int x=*s.begin();
int y=*s.rbegin();

if(v[x].size()==m)
{
    for(int i=0;i<v[x].size();i++)
    {
        cout<<v[x][i]<<" ";
    }
    cout<<y<<endl;
}
else
{
    for(int i=0;i<v[y].size();i++)
    {
        cout<<v[y][i]<<" ";
    }
    cout<<x<<endl;

}


}

return 0;
}