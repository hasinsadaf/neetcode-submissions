class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(),high=INT_MIN,low=1,ans=1;
        for(auto &i:piles){
            high=max(i,high);
        }
        while(low<=high){
            int mid=low+(high-low)/2,need=0;
            //bool f=true;
            for(auto &i:piles){
                need+=(i+mid-1)/mid;
            }
            if(need<=h){
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
