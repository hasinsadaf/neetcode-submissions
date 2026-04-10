class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=46340;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid*mid<x){
                low=mid+1;
            }
            else if(mid*mid==x){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
        return low-1;
    }
};