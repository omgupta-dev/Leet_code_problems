class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        for(auto it : m)
        {
            if(it.first==0 && it.second>1)
                return true;
            else if(it.first!=0 && m.contains(2*it.first))
                return true;
        }
        return false;
    }
};