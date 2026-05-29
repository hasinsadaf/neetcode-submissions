class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>m1(26),m2(26);
        int n=s2.length(),k=s1.length();
        for(auto &i:s1){
            m1[i-'a']++;
        }
        if(k>n) return false;
        for(int i=0;i<k;i++){
            m2[s2[i]-'a']++;
        }
        if(m1==m2) return true;

        for(int i=k;i<n;i++){
            m2[s2[i-k]-'a']--;
            m2[s2[i]-'a']++;
            if(m1==m2) return true;
        }
        return false;
    }
};
