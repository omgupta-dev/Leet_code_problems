class Solution {
    int isprefixsuffix(string s1,string s2)
    {
        if(s1.size()>s2.size()) return 0;
        string prefix=(s2.substr(0,s1.size()));
        string suffix=(s2.substr(s2.size()-s1.size(),s1.size()));
        if(prefix==s1 && suffix==s1)
        {
            cout<<"yes"<<endl;
            return 1;
        }
        return 0;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if(isprefixsuffix(words[i],words[j]))
                    ans++;
            }
        }
        return ans;
    }
};