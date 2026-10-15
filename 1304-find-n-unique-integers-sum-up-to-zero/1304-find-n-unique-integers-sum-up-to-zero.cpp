class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n,0);
        if(n&1)
        {
            int neg=0;
            for(int i=n/2;i>=0;i--)
            {
                ans[i]=neg;
                neg--;
            }
            int pos=0;
            for(int i=n/2;i<n;i++)
            {
                ans[i]=pos;
                pos++;
            }
        }
        else
        {
            int neg=-1;
            for(int i=(n/2)-1;i>=0;i--)
            {
                ans[i]=neg;
                neg--;
            }
            int pos=1;
            for(int i=n/2;i<n;i++)
            {
                ans[i]=pos;
                pos++;
            }
        }
        return ans;
    }
};