class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int>m;
        for(auto &i:nums){
            m[i]++;
        }
        int j=0;
        for(auto &i:m){
            for(int k=0;k<i.second;k++){
                nums[j++]=i.first;
            }
        }
        return nums;
    }
};