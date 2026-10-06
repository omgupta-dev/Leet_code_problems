class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(i%3==0 && i!=0)
                ans+='.';
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};