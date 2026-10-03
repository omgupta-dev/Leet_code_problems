class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>freq(26,0);
        for(int i=0;i<text.size();i++)
            freq[text[i]-'a']++;
        int a,b,l,o,n;
        for(int i=0;i<26;i++)
        {
            if(i==0) a=freq[i];
            if(i==1) b=freq[i];
            if(i==11) l=freq[i]/2;
            if(i==14) o=freq[i]/2;
            if(i==13) n=freq[i];
        }
        return min({a,b,l,o,n});
    }
};