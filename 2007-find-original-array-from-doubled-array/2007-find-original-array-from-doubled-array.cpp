class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0) return {};
        vector<int>original;
        unordered_map<int,int>m;
        for(int i=0;i<changed.size();i++)
        {
            m[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++)
        {
            if(m[changed[i]]==0) continue;
            if(m[changed[i]] && m.contains(changed[i]*2))
            {
                original.push_back(changed[i]);
                m[changed[i]]--;
                m[changed[i]*2]--;
            }
            else
                return {};
        }
        if(original.size()==changed.size()/2)
            return original;
        return {};
    }
};