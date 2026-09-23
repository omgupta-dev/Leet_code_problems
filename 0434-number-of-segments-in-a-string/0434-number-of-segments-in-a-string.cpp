class Solution {
public:
    int countSegments(string s) {
        if(s.empty()) return 0;
        vector<string>v;
        string word="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(!word.empty())
                {
                    v.push_back(word);
                    word="";
                }
            }
            else
                word+=s[i];
        }
        if(!word.empty())
        {
            v.push_back(word);
            word="";
        }
        return v.size();
    }
};