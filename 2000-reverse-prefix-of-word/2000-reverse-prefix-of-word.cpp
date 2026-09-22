class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        string prefix="";
        if(find(word.begin(),word.end(),ch)==word.end())
            return word;
        for(char i : word)
        {
            if(i==ch)
            {
                prefix+=ch;
                break;
            }
            prefix+=i;
        }
        reverse(prefix.begin(),prefix.end());
        int k=0;
        for(int i=0;i<prefix.size();i++)
        {
            ans+=prefix[i];
            k++;
        }
        for(int i=k;i<word.size();i++)
        {
            ans+=word[i];
        }
        return ans;
    }
};