class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int end=0;
        int lsub=0;
        unordered_map<char,int>m;
        while(end<s.size())
        {
            m[s[end]]++;
            if(m.size()!=end-start+1)
            {
                m[s[start]]--;
                if(m[s[start]]==0)
                    m.erase(s[start]);
                start++;
            }
            lsub=max(lsub,end-start+1);
            end++;
        }
        return lsub;
    }
};