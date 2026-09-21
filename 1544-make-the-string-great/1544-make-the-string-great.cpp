class Solution {
public:
    string makeGood(string s) {
        if(s.size()==1) return s;
        string ans="";
        ans+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(ans.empty())
            {
                ans+=s[i];
                continue;
            }
            else if(abs(ans.back()-s[i])==32)
            {
                ans.pop_back();
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};