class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int n1=n-1;
        int flag=n&n1;
        if(flag)
            return false;
        else 
            return true;
    }
};