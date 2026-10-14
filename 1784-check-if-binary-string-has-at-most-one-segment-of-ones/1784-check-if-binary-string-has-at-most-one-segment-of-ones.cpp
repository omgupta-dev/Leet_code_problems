class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1 && s[0]=='1') return true;
        if(s.size()==1 && s[0]=='0') return false;
        int appeared=0;
        for(int i=0;i<s.size();i++)
        {
            if(appeared && s[i]=='1')
                return false;
            else if(s[i]=='1')
            {
                appeared=1;
                while(i<s.size() && s[i]=='1')
                    i++;
            }
        }
        return true;
    }
};