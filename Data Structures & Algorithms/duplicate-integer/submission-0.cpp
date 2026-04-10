class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        for(auto &i:nums){
            if(mp[i]>1){
                return true;
            }
        }
        return false;
    }
};