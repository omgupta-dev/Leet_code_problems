class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowel;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(string("aeiouAEIOU").find(s[i])!=string::npos)
                vowel.push_back(s[i]);
        }
        sort(vowel.begin(),vowel.end());
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(string("aeiouAEIOU").find(s[i])!=string::npos)
            {
                ans+=vowel[k++];
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};