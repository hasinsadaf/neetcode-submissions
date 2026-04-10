class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        for(int i=0;i<numbers.size()-1;i++){
            int x=target-numbers[i];
            int index2=lower_bound(numbers.begin()+i+1,numbers.end(),x)-numbers.begin();
            if(index2>i && index2<numbers.size() && numbers[index2]==x){
                ans.push_back(i+1);
                ans.push_back(index2+1);
            }
        }
        return ans;
    }
};
