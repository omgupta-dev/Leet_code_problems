class Solution {
public:
    int findComplement(int num) {
        long long upper;
        for(int i=1;i<32;i++)
        {
            if(pow(2,i)>num)
            {
                upper=(1ULL<<i)-1;
                break;
            }
        }
        return upper^num;
    }
};