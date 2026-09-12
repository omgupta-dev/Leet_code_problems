class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>upper(26,0);
        vector<int>lower(26,0);
        int ans=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>=97 && word[i]<=122)
                lower[word[i]-97]++;
            else if(word[i]>=65 && word[i]<=90)
                upper[word[i]-65]++;
        }
        for(int i=0;i<26;i++)
        {
            if(lower[i]!=0 && upper[i]!=0)
                ans++;
        }
        return ans;
    }
};