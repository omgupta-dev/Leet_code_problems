class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.size();
        vector<int>nums(n);
        for(int i=0;i<n;i++)
            nums[i]=(s[i]-'a'+1);
        int lsum=0,rsum=0;
        for(int i=0;i<n;i++)
            rsum+=nums[i];
        for(int i=0;i<n;i++)
        {
            lsum+=nums[i];
            rsum-=nums[i];
            if(lsum==rsum)
                return true;
        }
        return false;
    }
};