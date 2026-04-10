class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = 47000;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sq = 1LL * mid * mid;  
            
            if (sq < x) {
                low = mid + 1;
            } 
            else if (sq == x) {
                return mid;
            } 
            else {
                high = mid - 1;
            }
        }
        return low - 1;
    }
};
