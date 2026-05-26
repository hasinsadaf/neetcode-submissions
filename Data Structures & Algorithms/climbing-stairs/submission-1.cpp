class Solution {
    vector<int>dp;
    int ways(int n){
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=ways(n-2)+ways(n-1);
    }
public:
    int climbStairs(int n) {
        dp.resize(n+1,-1);
        return ways(n);
    }
};
