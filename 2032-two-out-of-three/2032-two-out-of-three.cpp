class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        unordered_set<int>s3(nums3.begin(),nums3.end());
        vector<int>ans;
        vector<int>freq(101,0);
        for(int i : s1) freq[i]++;
        for(int i : s2) freq[i]++;
        for(int i : s3) freq[i]++;
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]>=2)
                ans.push_back(i);
        }
        return ans;
    }
};