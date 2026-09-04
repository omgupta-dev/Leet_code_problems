class Solution {
public:
    int alternateDigitSum(int n) {
        int ans=0;
        int sign=1;
        int rev=0;
        int num=n;
        while(num)
        {
            rev=rev*10+num%10;
            num/=10;
        }
        while(rev)
        {
            ans+=sign*rev%10;
            rev/=10;
            sign*=-1;
        }
        return ans;
    }
};