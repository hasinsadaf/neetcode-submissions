class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size(),high=0,low=0,ans=0;
        for(auto &i:weights){
            high+=i;
            low=max(i,low);
        }
        while(low<=high){
            int mid=low+(high-low)/2,need=1,sum=0;
            //bool f=true;
            for(auto &i:weights){
                if(sum+i>mid){
                    need++;
                    sum=i;
                }
                else{
                    sum+=i;
                }
            }
            if(need<=days){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};