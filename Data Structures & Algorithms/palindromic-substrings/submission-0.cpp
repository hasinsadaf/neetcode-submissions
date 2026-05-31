class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length(),cnt=0;
        vector<vector<int>>dp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            cnt++;
        }
        for(int i=2;i<=n;i++){
            for(int j=0;j+i-1<n;j++){
                int len=j+i-1;

                if(i==2){
                    dp[j][len]=(s[j]==s[len]);
                }
                else{
                    dp[j][len]=(s[len] == s[j] && dp[j+1][len-1]);
                }

                if(dp[j][len]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
