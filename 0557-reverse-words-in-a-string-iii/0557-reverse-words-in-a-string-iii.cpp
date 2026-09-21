class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string word="";
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(word.begin(),word.end());
                ans+=word;
                word="";
                ans+=' ';
            }
            else
                word+=s[i];
        }
        if(!word.empty())
        {
            reverse(word.begin(),word.end());
            ans+=word;
        }
        return ans;
    }
};