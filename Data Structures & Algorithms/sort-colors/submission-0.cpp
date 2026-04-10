class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        int j=0;
        for(auto &i:mp){
            for(int k=0;k<i.second;k++){
                nums[j++]=i.first;
            }
            //j=i.second;
        }
        for(auto &i:nums){
            cout<<i<<",";
        }
    }
};