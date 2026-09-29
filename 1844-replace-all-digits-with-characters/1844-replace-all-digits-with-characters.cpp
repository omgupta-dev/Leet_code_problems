class Solution {
public:
    string replaceDigits(string s) {
        if(s.size()==1) return s;
        for(int i=1;i<s.size();i=i+2)
        {
            int k=s[i]-'0';
            s[i]=s[i-1]+k;
        }
        return s;
    }
};