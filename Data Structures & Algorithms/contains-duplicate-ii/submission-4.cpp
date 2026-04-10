class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0){
            return false;
        }
        else{
            for(int i=0;i<nums.size();i++){
                for(int j=1;j<=k;j++){
                    if(i+j<nums.size()){
                        if(nums[i+j]==nums[i]){return true;}
                    }
                }
            }
            return false;
        }
    }
};