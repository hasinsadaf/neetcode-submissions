class Solution {
public:
    bool isPalindrome(string s) {
       string t;
       for(auto &i:s){
        if((i>='A' && i<='Z') || (i>='a' && i<='z') || (i>='0' && i<='9')){
            t+=toupper(i);
        }
       }
       int l=0,r=t.length()-1;
       while(l<=r){
        if(t[l]==t[r]){
            l++;
            r--;
        }
        else{
            return false;
        }
       }
       return true; 
    }
};
