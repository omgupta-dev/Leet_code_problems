class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans="";
        string word="";
        int k=1;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                if(string("aeiouAEIOU").find(word[0])!=string::npos)
                {
                    ans+=word;
                    ans+="ma";
                    for(int j=1;j<=k;j++)
                        ans+='a';
                    ans+=' ';
                    word="";
                    k++;
                }
                else
                {
                    for(int j=1;j<word.size();j++)
                    {
                        ans+=word[j];
                    }
                    ans+=word[0];
                    ans+="ma";
                    for(int j=1;j<=k;j++)
                    {
                        ans+='a';
                    }
                    ans+=' ';
                    word="";
                    k++;
                }
            }
            else
            {
                word+=sentence[i];
            }
        }
        if(!word.empty())
        {
            if(string("aeiouAEIOU").find(word[0])!=string::npos)
            {
                ans+=word;
                word="";
                ans+="ma";
                for(int j=1;j<=k;j++)
                    ans+='a';
            }
            else
            {
                for(int j=1;j<word.size();j++)
                    ans+=word[j];
                ans+=word[0];
                ans+="ma";
                word="";
                for(int j=1;j<=k;j++)
                    ans+='a';
            }
        }
        return ans;
    }
};