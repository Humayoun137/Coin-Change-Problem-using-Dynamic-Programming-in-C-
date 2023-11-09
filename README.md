# Coin-Change-Problem-using-Dynamic-Programming-in-C-
The Coin Change Problem is a classic algorithmic problem that asks to find the number of ways to make a certain amount of change using a given set of coin denominations. Dynamic Programming is an efficient technique to solve this problem.
In the dynamic programming approach for the Coin Change Problem, we create a table to store the solutions to subproblems. Let's say the amount we want to make change for is n, and we have an array of coin denominations coins[]. We initialize a table dp[] of size n + 1 where dp[i] represents the number of ways to make change for amount i.
We start by setting dp[0] = 1 because there is one way to make change for the amount 0, which is by not using any coin. Then, for each coin denomination, we iterate through the dp array and update the table values as follows:
for coin in coins:
    for i in range(coin, n + 1):
        dp[i] += dp[i - coin]

In this way, dp[n] will contain the total number of ways to make change for the given amount n using the provided coin denominations.
Dynamic Programming helps in solving the Coin Change Problem efficiently by breaking it down into smaller subproblems and storing their solutions, avoiding redundant calculations and improving the overall time complexity of the solution.

