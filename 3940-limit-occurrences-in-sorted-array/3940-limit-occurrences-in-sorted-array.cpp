class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        vector<int>ans;
        for(auto it : m)
        {
            if(it.second<=k)
            {
                for(int i=0;i<it.second;i++)
                    ans.push_back(it.first);
            }
            else
            {
                for(int i=0;i<k;i++)
                    ans.push_back(it.first);
            }
        }
        return ans;
    }
};