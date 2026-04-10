class Solution {
public:

    bool IsPalindrome(string s){
        int l=0,r=s.length()-1;
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            string temp=s.substr(0, i) + s.substr(i+1);
            if(IsPalindrome(temp)){
                return true;
            }
            //cout<<temp<<endl;
        }
        string t;
        for(int i=1;i<s.length();i++){
            t+=s[i];
        }
        if(IsPalindrome(t)){
            return true;
        }
        return false;
    }
};