class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            if(!m.contains(s[i]))
                m[s[i]]=1;
            else
                m[s[i]]++;
        }
        unordered_map<char,int> :: iterator it=m.begin();
        int k=it->second;
        while(it!=m.end())
        {
            if(it->second!=k) return false;
            it++;
        }
        return true;
    }
};