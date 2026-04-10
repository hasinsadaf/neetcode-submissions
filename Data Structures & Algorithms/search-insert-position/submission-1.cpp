class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(index>=0 && index<nums.size()){
            return index;
        }
        else{
            return nums.size();
        }
    }
};