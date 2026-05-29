class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                int r=nums.size()-1;
                while(r>j){
                    if(nums[r]==0-nums[i]-nums[j]){
                        st.insert({nums[i],nums[j],nums[r]});
                        break;
                    }
                    r--;
                }
            }
        }
        for(auto &i:st){
            ans.push_back(i);
        }
        return ans;
    }
};
