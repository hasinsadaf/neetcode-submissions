class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ones=__builtin_popcount(n);
        return ones;
    }
};
