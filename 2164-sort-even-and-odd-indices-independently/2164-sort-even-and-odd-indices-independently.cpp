class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i&1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        for(int i=0;i<even.size();i++)
        {
            ans[i*2]=even[i];
        }
        for(int i=0;i<odd.size();i++)
        {
            ans[i*2+1]=odd[i];
        }
        return ans;
    }
};