class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi=0;
        int ans;
        for(auto it : m)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};