class Solution {
public:
    string greatestLetter(string s) {
        unordered_map<char,int>upper;
        unordered_map<char,int>lower;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
                upper[s[i]]++;
            else if(s[i]>=97 && s[i]<=122)
                lower[s[i]]++;
        }
        int maxi=-1;
        for(auto i : upper)
        {
            for(auto it : lower)
            {
                if((i.first)-'A'==(it.first)-'a')
                {
                    if((i.first)-'A'>maxi)
                        maxi=(i.first)-'A';
                }
            }
        }
        if(maxi!=-1)
            return string(1,char(maxi+'A'));
        return "";
    }
};