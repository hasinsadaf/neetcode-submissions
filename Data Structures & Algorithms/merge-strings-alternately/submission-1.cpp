class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string none;
        for(int i=0;i<min(word1.length(),word2.length());i++){
            none+=word1[i];
            none+=word2[i];
        }
        if(word1.length()>word2.length()){
            swap(word1,word2);
        }
        for(int i=word1.length();i<word2.length();i++){
            none+=word2[i];
        }
        return none;
    }
};