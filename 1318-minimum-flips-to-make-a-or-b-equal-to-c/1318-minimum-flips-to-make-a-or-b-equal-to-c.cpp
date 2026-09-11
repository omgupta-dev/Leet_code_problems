class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=a|b;
        int count=0;
        for(int i=0;i<32;i++)
        {
            int bit=(c>>i)&1;
            if(bit)
            {
                if(((ans>>i)&1)==0)
                    count++;
            }
            else
            {
                if((a>>i)&1)
                {
                    count++;
                }
                if((b>>i)&1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};