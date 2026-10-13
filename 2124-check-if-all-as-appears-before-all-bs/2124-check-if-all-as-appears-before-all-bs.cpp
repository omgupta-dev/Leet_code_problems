class Solution {
public:
    bool checkString(string s) {
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(flag && s[i]=='a')
                return false;
            else if(s[i]=='b')
                flag=1;
        }
        return true;
    }
};