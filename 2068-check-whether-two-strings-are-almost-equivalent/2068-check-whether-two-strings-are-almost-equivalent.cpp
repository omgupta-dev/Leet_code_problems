class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        vector<int>words1(26,0);
        vector<int>words2(26,0);
        for(int i=0;i<word1.size();i++)
        {
            int f=word1[i]-'a';
            int s=word2[i]-'a';
            words1[f]++;
            words2[s]++;
        }
        for(int i=0;i<26;i++)
        {
            if(abs(words1[i]-words2[i])>3)
                return false;
        }
        return true;
    }
};