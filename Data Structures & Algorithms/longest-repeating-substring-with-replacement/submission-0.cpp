class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>mp;
        int left=0,ans=0,mf=0;

        for (int right=0;right<s.length();right++) {
            mp[s[right]]++;
            mf=max(mf,mp[s[right]]);
            while(right-left+1-mf>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
