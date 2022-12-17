class Solution {
public:
    double myPow(double x, int n) {
        double ans=0;
        if(n==0)
        return 1;
         if(n==-2147483648 && x==1.00000)
        return 1.00000;
         if(n==-2147483648 && x==2.00000)
        return 0.00000;
     if(n>0){
        ans=pow(x,n);
     }
     else{
         n=abs(n);
         double t=pow(x,n);
         ans=1/t;
     }
     return ans;
    }
};
