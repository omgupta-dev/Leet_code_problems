class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                maxi++;
            else if(s[i]==')')
                maxi--;
            ans=max(maxi,ans);
        }
        return ans;
    }
};