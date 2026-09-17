class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size());
        for(int i=0;i<nums1.size();i++)
        {
            int k;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {    
                    k=j;
                    break;
                }
            }
            for(int j=k;j<nums2.size();j++)
            {
                if(nums1[i]<nums2[j])
                {
                    ans[i]=nums2[j];
                    break;
                }
            }
            if(ans[i])
                continue;
            ans[i]=-1;
        }
        return ans;
    }
};