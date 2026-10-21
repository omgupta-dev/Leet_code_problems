class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0;
        int end=k;
        double sum=0;
        for(int i=start;i<end;i++)
            sum+=nums[i];
        double average=sum/k;
        while(end<nums.size())
        {
            sum-=nums[start++];
            sum+=nums[end++];
            average=max(average,sum/k);
        }
        return average;
    }
};