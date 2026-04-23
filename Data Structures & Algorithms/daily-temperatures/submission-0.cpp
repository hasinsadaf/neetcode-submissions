class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
        for(int i=0;i<n-1;i++){
            int a=0;
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]){
                    ans[i]=a+1;
                    break;
                }
                else{
                    a++;
                }
            }
        }
        return ans;
    }
};
