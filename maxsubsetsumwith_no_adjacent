/* TIME COMPLEXITY : O(N) , SPACE COMPLEXITY : O(N) */

#include<bits/stdc++.h>
using namespace std;

int maxsubsetsum(vector<int> a,int n)
{
    if(n==0)
    {
        return -1;
    }
    int*dp=new int[n];
    dp[0]=a[0];
    dp[1]=max(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+a[i]);
    }
    return dp[n-1];
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<maxsubsetsum(a,n);
}

/*SPACE OPTIMISED SOLUTION */

int maxsubsetoptimized(vector<int> a,int n)
{
    int second=a[0];
    int first=max(a[0],a[1]);
    int current;
    for(int i=2;i<n;i++)
    {
        current=max(first,second+a[i]);
        second=first;
        first=current;
    }
    return current;
}





