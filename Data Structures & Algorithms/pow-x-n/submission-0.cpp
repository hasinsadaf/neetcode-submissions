class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            x=1;
        }
        else if(n>0){
            double temp=x;
            for(int i=1;i<=n-1;i++){
                x*=temp;
            }
        }
        else{
            double temp=x;
            x/=x;
            n=abs(n);
            for(int i=1;i<=n;i++){
                x/=temp;
            }
        }
        return x;
    }
};
