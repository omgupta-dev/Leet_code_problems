class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if(nums.size()==1) return {};
        int start=1;
        int end=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>ans;
        for(int i=start;i<=end;i++)
        {
            if(!m.contains(i))
                ans.push_back(i);
        }
        return ans;
    }
};