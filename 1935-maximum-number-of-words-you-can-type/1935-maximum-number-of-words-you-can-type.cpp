class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans=0;
        string word="";
        for(int i=0;i<text.size();i++)
        {
            if(text[i]==' ')
            {
                int flag=1;
                for(int j=0;j<brokenLetters.size();j++)
                {
                    if(word.contains(brokenLetters[j]))
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    ans++;
                word="";
            }
            else
                word+=text[i];
        }
        if(!word.empty())
        {
            int flag=1;
            for(int j=0;j<brokenLetters.size();j++)
            {
                if(word.contains(brokenLetters[j]))
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                ans++;
            word="";
        }
        return ans;
    }
};