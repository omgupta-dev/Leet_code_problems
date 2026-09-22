class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string,int>m;
        for(int i=0;i<dictionary.size();i++)
        {
            m[dictionary[i]]++;
        }
        int k=0;
        for(int i=sentence.size()-1;i>=0;i--)
        {
            if(sentence[i]==' ')
            {
                break;
            }
            k++;
        }
        string ans="";
        string word="";
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                ans+=word;
                ans+=' ';
                word="";
            }
            else if(m.contains(word))
            {
                ans+=word;
                if(k<sentence.size()-i)
                    ans+=' ';
                while(sentence[i]!=' ' && i<sentence.size())
                    i++;
                word="";
            }
            else
            {
                word+=sentence[i];
            }
        }
        if(!word.empty())
        {
            ans+=word;
        }
        return ans;
    }
};