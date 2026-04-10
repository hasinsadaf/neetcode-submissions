class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        vector<int>v;
        for(auto &i:operations){
            int n=v.size();
            if(i=="+"){
                if(n>=2){
                    v.push_back(v[n-1]+v[n-2]);
                }
            }
            else if(i=="C"){
                v.pop_back();
            }
            else if(i=="D"){
                v.push_back(v[n-1]*2);
            }
            else{
                //int x=i-"0";
                v.push_back(stoi(i));
            }
        }
        for(auto &i:v){
            ans+=i;
        }
        return ans;
    }
};