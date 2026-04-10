class Solution {
public:

    string encode(vector<string>& strs) {
        string decoded;
        for(auto &i:strs){
            decoded+=i+"sadaf";
        }
        return decoded;
    }

    vector<string> decode(string s) {
        vector<string>output;
        int len=s.length();
        string temp="";
        for(int i=0;i<len;i++){
            if(s[i]=='s' && s[i+1]=='a' && s[i+2]=='d' && s[i+3]=='a' && s[i+4]=='f'){
                output.push_back(temp);
                temp="";
                i+=4;
            }
            else{
                temp+=s[i];
            }
        }
        return output;
    }
};
