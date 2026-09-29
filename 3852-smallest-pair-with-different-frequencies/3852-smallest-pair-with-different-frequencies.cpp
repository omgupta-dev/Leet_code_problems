class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        if(nums.size()==1) return {-1,-1};
        map<int,int>m;
        vector<int>ans(2,0);
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        auto it=m.begin();
        int a=it->first;
        int count=it->second;
        ans[0]=a;
        while(it!=m.end())
        {
            if(it->second!=count)
            {
                ans[1]=it->first;
                return ans;
            }
            it++;
        }
        return {-1,-1};
    }
};