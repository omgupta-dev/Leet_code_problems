class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string res=s+s;
        return (search(res.begin(),res.end(),goal.begin(),goal.end())!=res.end());
    }
};