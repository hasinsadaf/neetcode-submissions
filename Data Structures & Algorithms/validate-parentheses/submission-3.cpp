class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char> mp={{')','('},{'}','{'},{']','['}};
        for(auto &i:s){
            if(mp.count(i)){
                if(!st.empty() && st.top()==mp[i]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(i);
            }
        }
        return st.empty();
    }
};
