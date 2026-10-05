class Solution {
public:
    int countKeyChanges(string s) {
        if(s.size()==1) return 0;
        char curr=s[0];
        int count=0;
        for(int i=1;i<s.size();i++)
        {
            if(curr>=65 && curr<=90)
            {
                if(s[i]>=65 && s[i]<=90)
                {
                    if(curr!=s[i])
                    {
                        count++;
                    }
                }
                else if(s[i]>=97 && s[i]<=122)
                {
                    if((curr-'A')!=(s[i]-'a'))
                    {
                        count++;
                    }
                }
            }
            else if(curr>=97 && curr<=122)
            {
                if(s[i]>=65 && s[i]<=90)
                {
                    if((curr-'a')!=(s[i]-'A'))
                    {
                        count++;
                    }
                }
                else if(s[i]>=97 && s[i]<=122)
                {
                    if(curr!=s[i])
                    {
                        count++;
                    }
                }
            }
            curr=s[i];
        }
        return count;
    }
};