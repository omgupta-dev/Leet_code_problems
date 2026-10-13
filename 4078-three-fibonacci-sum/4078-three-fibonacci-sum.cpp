class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n==1) return false;
        int f=0,s=1;
        int t;
        while(f+s<=n)
        {
            t=f+s;
            if(n==t*2) return true;
            f=s;
            s=t;
        }
        return false;
    }
};