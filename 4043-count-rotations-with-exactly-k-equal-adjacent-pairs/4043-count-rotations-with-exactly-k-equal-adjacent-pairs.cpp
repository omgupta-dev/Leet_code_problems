class Solution {
    int check(string s)
    {
        int score=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i+1]==s[i])
                score++;
        }
        return score;
    }
public:
    int countRotations(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(check(s)==k)
                ans++;
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.end()-1);
        }
        return ans;
    }
};