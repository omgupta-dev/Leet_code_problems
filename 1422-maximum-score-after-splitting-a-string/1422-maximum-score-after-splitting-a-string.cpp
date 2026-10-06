class Solution {
public:
    int maxScore(string s) {
        int maxscore=0;
        string l="";
        l+=s[0];
        string r="";
        for(int i=1;i<s.size();i++)
            r+=s[i];
        while(l.size()<s.size())
        {
            int zcount=0;
            int ocount=0;
            for(int i=0;i<l.size();i++)
            {
                if(l[i]=='0')
                    zcount++;
            }
            for(int i=0;i<r.size();i++)
            {
                if(r[i]=='1')
                    ocount++;
            }
            maxscore=max(zcount+ocount,maxscore);
            l+=s[l.size()];
            r.erase(0,1);
        }
        return maxscore;
    }
};