class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        int mlen=INT_MAX,n=s.size();
        for(auto &i:s){
            int sz=i.length();
            mlen=min(mlen,sz);
        }
        for(int i=0;i<mlen;i++){
            char c=s[0][i];
            int cnt=1;
            for(int j=1;j<n;j++){
                if(s[j][i]==c){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt==n){
                ans+=c;
            }
            else{
                break;
            }
        }
        return ans;
    }
};