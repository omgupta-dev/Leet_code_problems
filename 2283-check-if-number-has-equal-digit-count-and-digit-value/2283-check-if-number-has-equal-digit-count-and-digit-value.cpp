class Solution {
public:
    bool digitCount(string num) {
        
        vector<int>m(num.size(),0);
        for(int i=0;i<num.size();i++)
        {
            if((num[i]-'0')<num.size())
                m[num[i]-'0']++;
        }
        for(int i=0;i<num.size();i++)
        {
            if(m[i]!=(num[i]-'0'))
                return false;
        }
        return true;
    }
};