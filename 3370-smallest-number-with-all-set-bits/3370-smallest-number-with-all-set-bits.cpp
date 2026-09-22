class Solution {
public:
    int smallestNumber(int n) {
        int ans;
        while(n)
        {
            int temp=n;
            while(temp)
            {
                int digit=temp%2;
                if(!(digit&1))
                {
                    break;
                }
                temp/=2;
            }
            if(temp==0)
            {
                ans=n;
                break;
            }
            n++;
        }
        return ans;
    }
};