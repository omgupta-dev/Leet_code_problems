class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key && i+1<nums.size())
                m[nums[i+1]]++;
        }
        int ans=0;
        int mcount=0;
        for(auto it : m)
        {
            if(it.second>=mcount)
            {
                ans=it.first;
                mcount=it.second;
            }
        }
        return ans;
    }
};