class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        long long sum=0;
        unordered_set<int>s;
        for(int i : nums)
        {
            s.insert(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        long long average=sum/static_cast<long long>(nums.size());
        if(average<0)
            average=0;
        long long ans=average+1;
        while(s.count(ans))
        {
            ans++;
        }
        return ans;
    }
};