#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
#define lln long long int


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,si=0,di=0,j=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    deque<int>d(a,a+n);

    while(!d.empty())
    {
        j++;
        if(j%2==1)
        {

        if(d.front()>d.back())
        {
            si=si+d.front();
            d.pop_front();
        }
        else
        {
            si=si+d.back();
            d.pop_back();
        }
        }
        else
        {
        if(d.front()>d.back())
        {
            di=di+d.front();
            d.pop_front();
        }
        else
        {
            di=di+d.back();
            d.pop_back();
        }
        }

    }



cout<<si<<" "<<di<<endl;
return 0;
}