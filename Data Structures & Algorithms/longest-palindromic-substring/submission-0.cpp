class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start = 0;
        int maxLen = 1;
        vector<vector<int>>dp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
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

                if(dp[j][len] && i>maxLen){
                    maxLen=i;
                    start=j;
                }
            }
        }
        return s.substr(start,maxLen);
    }
};
