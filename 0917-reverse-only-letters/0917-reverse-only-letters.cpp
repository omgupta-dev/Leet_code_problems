class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
                str.push_back(s[i]);
        }
        reverse(str.begin(),str.end());
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                s[i]=str[k++];
            }
        }
        return s;
    }
};