class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     set<int>s;
     for(auto &i:nums){
        if(i>0){
            s.insert(i);
        }
     }
     int num=1;
     bool f=true;
     while(f){
        if(s.find(num)==s.end()){
            break;
        }
        else{
            num++;
        }
     }   
     return num;
    }
};