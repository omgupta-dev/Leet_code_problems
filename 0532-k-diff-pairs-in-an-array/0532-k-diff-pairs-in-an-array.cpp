class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto it : m)
        {
            if(k>0)
            {
                if(m.contains(it.first+k))
                    ans++;
            }
            else if(k==0)
            {
                if(it.second>1)
                    ans++;
            }
        }
        return ans;
    }
};