class Solution {
public:
    int trap(vector<int>& height) {
        int r=height.size()-1,l=0,ans=0;
        int mxl=0,mxr=0;
        while(l<r){
            if(height[l]>mxl){
                mxl=height[l];
            }

            ans+=mxl-height[l];

            if(height[r]>mxr){
                mxr=height[r];
            }

            ans+=mxr-height[r];

            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};
