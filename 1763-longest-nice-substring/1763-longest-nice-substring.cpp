class Solution {
public:
    string longestNiceSubstring(string s) {
        string maxs="";
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                string subs=s.substr(i,j-i+1);
                vector<int>freq1(26,0);
                vector<int>freq2(26,0);
                for(int k=0;k<subs.size();k++)
                {
                    if(subs[k]>=65 && subs[k]<=90)
                        freq1[subs[k]-'A']++;
                    else if(subs[k]>=97 && subs[k]<=122)
                        freq2[subs[k]-'a']++;
                }
                int flag=1;
                for(int k=0;k<26;k++)
                {
                    if((freq1[k]>0 && freq2[k]==0) || (freq1[k]==0 && freq2[k]>0))
                        flag=0;
                }
                if(flag)
                {
                    if(maxs.size()<subs.size())
                        maxs=subs;
                }
            }
        }
        return maxs;
    }
};