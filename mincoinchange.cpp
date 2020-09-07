#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> change,int n)
{
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int denom:change)
    {
        for(int i=0;i<=n;i++)
        {
            if(denom<=i)
            {
            dp[i]=min(dp[i],1+dp[i-denom]);
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
}

int main()
{
    int d;
    cin>>d;
    vector<int> change(d);
    for(int i=0;i<d;i++)
    {
        cin>>change[i];
    }
    int n;
    cin>>n;
    solve(change,n);
}
