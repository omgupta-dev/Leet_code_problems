class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
                arr.push_back(nums[i]);
        }
        if(!arr.size()) return nums;
        k=k%arr.size();
        if(k>0)
        {
            rotate(arr.begin(),arr.begin()+k,arr.end());
        }
        int p=0;
        for(int i=0;i<nums.size() && p<arr.size();i++)
        {
            if(nums[i]>=0)
            {
                nums[i]=arr[p];
                p++;
            }
        }
        return nums;
    }
};