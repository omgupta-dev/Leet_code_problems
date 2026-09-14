class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==dividend) return 1;
        bool sign=true;
        if(divisor>0 && dividend<0) sign=false;
        if(divisor<0 && dividend>=0) sign=false;
        long long ans=0;
        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);
        while(n>=d)
        {
            long long count=0;
            while(n>=(d<<(count+1)))
                count++;
            ans+=(1LL<<count);
            n=n-(d<<count);
        }
        if(ans>=(1LL<<31) && sign==true) return INT_MAX;
        if(ans>=(1LL<<31) && sign==false) return INT_MIN;
        if(sign) return ans;
        else return -ans;
    }
};