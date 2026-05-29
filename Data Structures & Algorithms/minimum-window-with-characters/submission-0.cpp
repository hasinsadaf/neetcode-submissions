class Solution {
    map<char,int>ss,tt;
    bool ok(){
        for(auto &i:tt){
            if(ss[i.first]<i.second){
                return false;
            }
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        string ans="";
        for(auto &i:t){
            tt[i]++;
        }
        int l=0,r=0,len=INT_MAX;
        for(int i=0;i<s.size();i++){
            ss[s[i]]++;
            while(ok() && l<=i){
                if(i-l+1<len){
                    len=i-l+1;
                    r=l;
                }
                ss[s[l]]--;
                l++;
            }
        }
        if(len!=INT_MAX) ans=s.substr(r,len);
        return ans;
    }
};
