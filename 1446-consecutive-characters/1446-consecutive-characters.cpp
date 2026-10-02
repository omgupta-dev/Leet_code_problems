class Solution {
public:
    int maxPower(string s) {
        int ans=0;
        int count=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
                count++;
            else
            {
                ans=max(count,ans);
                count=1;
            }
        }
        ans=max(ans,count);
        return ans;
    }
};