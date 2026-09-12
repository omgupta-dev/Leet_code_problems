class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>evenodd(2,0);
        for(int i=0;i<32;i++)
        {
            if((n>>i)&1)
            {
                if(i&1)
                    evenodd[1]++;
                else
                    evenodd[0]++;
            }
        }
        return evenodd;
    }
};