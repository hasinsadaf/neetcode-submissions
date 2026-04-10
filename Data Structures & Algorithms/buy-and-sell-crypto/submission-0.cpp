class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>sm(n);
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                sm[i]=prices[i];
            }
            else{
                sm[i]=max(sm[i+1],prices[i]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,sm[i]-prices[i]);
        }
        return ans;
    }
};
