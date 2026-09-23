class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            unordered_map<char,int>m;
            for(int j=i;j<s.size();j++)
            {
                m[s[j]]++;
                int maxi=0;
                int mini=s.size();
                for(auto it : m)
                {
                    if(maxi<it.second)
                        maxi=it.second;
                    if(mini>it.second)
                        mini=it.second;
                }
                ans+=(maxi-mini);
            }
        }
        return ans;
    }
};