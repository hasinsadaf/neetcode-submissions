class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>ans;
        vector<int>v,value,index;
        for(int i=0;i<nums.size();i++){
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            value.push_back(ans[i].first);
            index.push_back(ans[i].second);
        }
        for(int i=0;i<nums.size()-1;i++){
            int val=target-value[i];
            int gotindex=lower_bound(value.begin()+i+1,value.end(),val)-value.begin();
            if(val==value[gotindex]){
                v.push_back(index[i]);
                v.push_back(index[gotindex]);
                sort(v.begin(),v.end());
                return v;
            }
        }
    }
};
