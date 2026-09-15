class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num1(1001);
        vector<int> num2(1001);
        for(int i=0;i<nums1.size();i++)
        {
            num1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            num2[nums2[i]]++;
        }
        int n=max(nums1.size(),nums2.size());
        vector<int>ans;
        for(int i=0;i<1001;i++)
        {
            if(num1[i]!=0 && num2[i]!=0)
            {
                int mini=min(num1[i],num2[i]);
                while(mini)
                {
                    ans.push_back(i);
                    mini--;
                }
            }
        }
        return ans;
    }
};