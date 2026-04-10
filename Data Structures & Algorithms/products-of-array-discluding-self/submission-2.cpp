class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans=1,cnt=0,cnt2=0;
        for(auto &i:nums){
            if(i==0){
                cnt++;
            }
            else{
                cnt2++;
                ans*=i;
            }
        }
        vector<int>a;
        if(cnt==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    a.push_back(ans);
                }
                else{
                    a.push_back(0);
                }
            }
        }
        else if(cnt>1){
            for(int i=0;i<nums.size();i++){
                a.push_back(0);
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                a.push_back(ans/nums[i]);
            }
        }
        return a;
    }
};
