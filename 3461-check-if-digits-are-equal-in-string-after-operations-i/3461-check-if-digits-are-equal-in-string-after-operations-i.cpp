class Solution {
public:
    bool hasSameDigits(string s) {
        string s1=s;
        while(s1.size()!=2)
        {
            string str="";
            for(int i=0;i<s1.size()-1;i++)
            {
                int s0=s1[i]-'0';
                int s2=s1[i+1]-'0';
                int temp=(s0+s2)%10;
                str+=to_string(temp);
            }
            s1=str;
        }
        if(s1[0]==s1[1])
            return true;
        else
            return false;
    }
};