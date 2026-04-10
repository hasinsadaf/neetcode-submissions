class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        vector<int>ans;
        for(auto &i:nums){
            m[i]++;
        }
        vector<pair<int,int>>p;
        for(auto &i:m){
            p.push_back({i.second,i.first});
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};
