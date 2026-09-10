class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prevbit=2;
        int  currbit=3;
        int num=n;
        while(num)
        {
            if(currbit==prevbit)
                return false;
            prevbit=currbit;
            currbit=num%2;
            num/=2;
        }
        if(currbit==prevbit)
            return false;
        return true;
    }
};