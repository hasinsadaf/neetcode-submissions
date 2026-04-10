class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(index>=0 && index<nums.size() && nums[index]==target){
            return index;
        }
        else{
            return -1;
        }
    }
};
