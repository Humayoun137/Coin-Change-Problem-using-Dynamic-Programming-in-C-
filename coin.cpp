#include <bits/stdc++.h>
using namespace std;
int coinChange(int coins[], int n, int amount)
{
    int dp[n+1][amount+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=amount; j++)
        {
            if(j == 0) dp[i][j] = 1;
            else if(i == 0) dp[i][j] = 0;
            else
            {
                dp[i][j] = dp[i-1][j];
                if(j >= coins[i-1])
                {
                    dp[i][j] += dp[i][j-coins[i-1]];
                }
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=amount; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][amount];
}
int main()
{
    int coins[] = {1,2,3,5};
    int n = sizeof(coins)/sizeof(coins[0]);
    int amount = 7;
    cout<<"Dynamic Table:"<<endl;
    int result = coinChange(coins, n, amount);
    cout<<endl<<"Number of ways to make change: "<<result;
    return 0;
}
