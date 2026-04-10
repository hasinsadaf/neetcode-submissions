class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sz=nums.size(),ans=0;
        for(int i=0;i<(1<<sz);i++){
            int sum=0;
            for(int j=0;j<sz;j++){
                if(i&(1<<j)){
                    sum^=nums[j];
                }
            }
            ans+=sum;
        }
        return ans;
    }
};