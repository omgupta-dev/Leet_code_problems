class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        map<pair<int,int>,int>m;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]-nums[i]==k && !m.contains({nums[i],nums[j]}))
                {
                    m[{nums[i],nums[j]}]++;
                    ans++;
                }
            }
        }
        return ans;
    }
};