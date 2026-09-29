class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ch;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(!ch.empty() && ch.top()==s[i])
                ch.pop();
            else
                ch.push(s[i]);
        }
        while(!ch.empty())
        {
            ans+=ch.top();
            ch.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};