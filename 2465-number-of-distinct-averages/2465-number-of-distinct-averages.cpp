class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<float>s;
        sort(nums.begin(),nums.end());
        while(nums.size())
        {
            float avg=(nums[0]+nums[nums.size()-1])/2.0f;
            s.insert(avg);
            nums.pop_back();
            nums.erase(nums.begin());
        }
        return s.size();
    }
};