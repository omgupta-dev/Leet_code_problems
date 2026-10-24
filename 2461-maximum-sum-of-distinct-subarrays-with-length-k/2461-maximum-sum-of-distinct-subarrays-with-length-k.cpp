class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int start=0;
        long long sum=0;
        vector<long long>arr;
        arr.push_back(INT_MIN);
        unordered_map<int,int>m;
        for(int end=0;end<nums.size();end++)
        {
            if(!m.contains(nums[end]))
            {
                sum+=nums[end];
                m[nums[end]]++;
                if(end-start+1==k)
                {
                    arr.push_back(sum);
                    m[nums[start]]--;
                    if (m[nums[start]]==0) {
                        m.erase(nums[start]);
                    }
                    sum-=nums[start++];
                }
            }
            else
            {
                while(m.contains(nums[end]) && start<=end)
                {
                    sum-=nums[start];
                    m[nums[start]]--;
                    if(m[nums[start]]==0)
                        m.erase(nums[start]);
                    start++;
                }
                sum+=nums[end];
                m[nums[end]]++;
                if(end-start+1==k)
                {
                    arr.push_back(sum);
                    m[nums[start]]--;
                    if(m[nums[start]]==0)
                        m.erase(nums[start]);
                    sum-=nums[start++];
                }
            }
        }
        long long ans=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            ans=max(ans,arr[i]);
        }
        if(ans==INT_MIN) return 0;
        return ans;
    }
};