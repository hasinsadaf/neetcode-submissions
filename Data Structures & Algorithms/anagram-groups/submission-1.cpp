class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>>v;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            v.push_back({s,strs[i]});
        }
        sort(v.begin(),v.end());
        vector<vector<string>>ans;
        for(int i=0;i<v.size();i++){
            vector<string>temp;
            temp.push_back(v[i].second);
            while (i+1<v.size() && v[i].first==v[i+1].first){
                temp.push_back(v[i+1].second);
                i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
