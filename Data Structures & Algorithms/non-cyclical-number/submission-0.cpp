class Solution {
public:

    int digit_sum(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            n/=10;
            sum+=r*r;
        }
        return sum;
    }
    bool isHappy(int n) {
        bool f=true;
        set<int>st;
        while(f){
            int s=digit_sum(n);
            n=s;
            if(st.find(s)!=st.end()){
                if(s!=1){
                    f=false;
                }
                break;
            }
            else{
                st.insert(s);
            }
        }
        return f;
    }
};
