class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()>=1){
            set<int>s;
        for(auto &i:nums){
            s.insert(i);
        }
        vector<int>v;
        for(auto &i:s){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        int ans=1,cnt=1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]+1==v[i+1]){
                cnt++;
            }
            else{
                ans=max(cnt,ans);
                cnt=1;
            }
            //cout<<v[i]<<" ";
        }
        ans=max(ans,cnt);
        return ans;
        }
        else{
            return 0;
        }
    }
};
