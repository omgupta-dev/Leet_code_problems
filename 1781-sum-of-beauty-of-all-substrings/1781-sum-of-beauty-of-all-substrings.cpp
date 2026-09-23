class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int>m(26,0);
            for(int j=i;j<s.size();j++)
            {
                m[s[j]-'a']++;
                int maxi=0;
                int mini=s.size();
                for(int k=0;k<26;k++)
                {
                    if(m[k]>0)
                    {
                        maxi=max(maxi,m[k]);
                        mini=min(mini,m[k]);
                    }
                }
                ans+=(maxi-mini);
            }
        }
        return ans;
    }
};