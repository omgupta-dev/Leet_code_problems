class Solution {
public:
    int secondHighest(string s) {
        map<int,int>m;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                int n=s[i]-'0';
                m[n]++;
            }
        }
        int maxi=0;
        for(auto it : m)
        {
            if(it.first>maxi)
                maxi=it.first;
        }
        if(!maxi) return -1;
        int ans=0;
        for(auto it : m)
        {
            if(it.first>ans && it.first!=maxi)
                ans=it.first;
        }
        if(m.contains(ans))
            return ans;
        return -1;
    }
};