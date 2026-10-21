class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>nums(2051,0);
        for(int i=0;i<logs.size();i++)
        {
            nums[logs[i][0]]++;
            nums[logs[i][1]]--;
        }
        for(int i=1;i<2051;i++)
        {
            nums[i]+=nums[i-1];
        }
        int maxi=0;
        for(int i=0;i<2051;i++)
            maxi=max(maxi,nums[i]);
        for(int i=0;i<2051;i++)
        {
            if(nums[i]==maxi)
                return i;
        }
        return 1950;
    }
};