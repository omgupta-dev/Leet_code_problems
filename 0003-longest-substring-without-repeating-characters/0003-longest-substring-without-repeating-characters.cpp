class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int l=0,r=0;
        int ans=0;
        while(r<s.size())
        {
            if(m.contains(s[r]))
            {
                if(m[s[r]]>=l)
                    l=m[s[r]]+1;
            }
            ans=max(r-l+1,ans);
            m[s[r]]=r;
            r++;
        }
        return ans;
    }
};