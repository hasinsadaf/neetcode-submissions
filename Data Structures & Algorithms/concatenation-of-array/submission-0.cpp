class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz=nums.size();
        vector<int>ans(2*sz);
        for(int i=0;i<sz;i++){
            ans[i]=nums[i];
        }
        for(int i=0;i<sz;i++){
            ans[sz+i]=nums[i];
        }
        return ans;
    }
};