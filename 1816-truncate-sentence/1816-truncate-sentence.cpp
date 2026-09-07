class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        string word="";
        for(int i=0;i<s.size() && k!=0;i++)
        {
            if(s[i]==' ')
            {
                ans+=word;
                word="";
                k--;
                if(k>0)
                    ans+=' ';
            }
            else
            {
                word+=s[i];
            }
        }
        ans+=word;
        return ans;
    }
};