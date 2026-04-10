class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size(),ans=INT_MIN;
        for(auto &i:nums){
            m[i]++;
        }
        for(auto &i:m){
            if(i.second>n/2){
                ans=max(i.first,ans);
            }
        }
        return ans;
    }
};