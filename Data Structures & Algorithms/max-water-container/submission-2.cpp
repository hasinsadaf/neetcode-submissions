class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size(),r=n-1,l=0,ans=0;
        
        while(l<r){
            ans=max(ans,(r-l)*(min(heights[l],heights[r])));
            if(heights[l]>heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};
