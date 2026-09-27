class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>div(word.size());
        long long cr=0;
        for(int i=0;i<word.size();i++)
        {
            int digit=word[i]-'0';
            cr=(cr*10+digit)%m;
            if(cr==0)
                div[i]=1;
            else
                div[i]=0;
        }
        return div;
    }
};