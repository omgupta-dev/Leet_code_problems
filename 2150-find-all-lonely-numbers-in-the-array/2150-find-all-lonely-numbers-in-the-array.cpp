class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it : m)
        {
            int n=it.first;
            if(it.second>1 || m.contains(n+1) || m.contains(n-1))
                continue;
            ans.push_back(it.first);
        }
        return ans;
    }
};