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
    int n,m;
    cin>>n>>m;

    int a[n+1][m+1];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }

    lln sum=0,ans=0;

    for(int i=1;i<=n;i++)
    {
        

        for(int j=1;j<=m;j++)
        {
            int x=i,y=j;

            while(x>=1 and y>=1 and x<=n and y<=m)
            {
                sum=sum+a[x][y];
               // cout<<x<<y<<" ";
                x--;
                y--;
            }
            //cout<<endl;
            x=i-1;y=j+1;

            while(x>=1 and y>=1 and x<=n and y<=m)
            {
                sum=sum+a[x][y];
               // cout<<x<<y<<" ";
                x--;
                y++;
            }
           // cout<<endl;

            x=i+1;y=j-1;

            while(x>=1 and y>=1 and x<=n and y<=m)
            {
                sum=a[x][y]+sum;
                //cout<<x<<y<<" ";
                x++;
                y--;
            }
            //cout<<endl;

            x=i+1;y=j+1;
            while(x>=1 and y>=1 and x<=n and y<=m)
            {
                sum=a[x][y]+sum;
                //cout<<x<<y<<" ";
                x++;
                y++;
            }
            //cout<<endl;
//cout<<sum<<endl;
ans=max(ans,sum);
sum=0;


        }
    }

cout<<ans<<endl;



}

return 0;
}
