#include<iostream>
#include<bits/stdc++.h>
#define ll long long int 
#define endl "\n"
#define maxx 10001
using namespace std;

// variation of unbounded knapsack.....

int rodcutting(int arr[],int price[],int n)
{
    int dp[n+1][n+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        dp[i][j]=0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=max(price[i-1]+dp[i][j-arr[i-1]],dp[i-1][j]);
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        n=4;
        int arr[]={1,2,3,4};
        int price[]={5,6,7,8};
        int res=rodcutting(arr,price,n);
        cout<<res<<endl;
    }
    return 0;
}
