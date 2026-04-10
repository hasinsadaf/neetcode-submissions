class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(),overflow=0;
        if(digits[n-1]<9){
            digits[n-1]++;
        }
        else{
            digits[n-1]=0;
            overflow++;
        }
        for(int i=n-2;i>=0;i--){
            int s=digits[i]+overflow;
            digits[i]=s%10;
            overflow=s/10;
        }
        if(overflow){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
