class Solution {
public:
    int maxDistinct(string s) {
        vector<int>freq(26,0);
        int ans=0;
        for(int i=0;i<s.size();i++)
            freq[s[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>=1)
                ans++;
        }
        return ans;
    }
};