class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int ans=stones[0],n=stones.size();
        for(int i=1;i<n;i++){
            sort(stones.begin(),stones.end());
            ans=abs(stones[n-1]-stones[n-2]);
            stones[n-2]=0;
            stones[n-1]=ans;
        }
        return ans;
    }
};
