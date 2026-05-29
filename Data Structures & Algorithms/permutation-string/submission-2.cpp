class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>m1,m2;
        int n=s2.length(),k=s1.length();
        for(auto &i:s1){
            m1[i]++;
        }
        if(k>n) return false;
        for(int i=0;i<k;i++){
            m2[s2[i]]++;
        }
        if(m1==m2) return true;

        for(int i=k;i<n;i++){
            if(--m2[s2[i-k]]==0){
                m2.erase(s2[i-k]);
            }
            m2[s2[i]]++;
            if(m1==m2) return true;
        }
        return false;
    }
};
