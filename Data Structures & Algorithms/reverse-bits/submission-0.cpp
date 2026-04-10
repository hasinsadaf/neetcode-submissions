class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int>ans;
        uint32_t a=0;
        int i=1;
        for(int j=0;j<32;j++){
            if((i<<j)&n){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        int j=31;
        for(auto &i:ans){
            a+=(i<<j);
            j--;
        }
        return a;
    }
};
