class Solution {
public:
    //recursion approach---tle
    int climbStairs(int n) {
        //    if(n==0) return 1;
        // if(n==1) return 1;
        // return climbStairs(n-1)+climbStairs(n-2);
        //tabulation approach
        // vector<int>dp(n+1,-1);
        // dp[0]=1;
        // dp[1]=1;
        // for(int i=2;i<=n;i++)
        // {
        //     dp[i]=dp[n-1]+dp[n-2];
        // }
        // return dp[n];
        int prev2=1;
        int prev=1;
        for(int i=2;i<=n;i++)
        {
            int cur=prev+prev2;
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};