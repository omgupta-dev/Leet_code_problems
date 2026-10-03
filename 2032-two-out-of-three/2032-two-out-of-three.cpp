class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        unordered_map<int,int>m3;
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]++;
            m2[nums2[i]]++;
        }
        for(int i=0;i<nums3.size();i++)
        {
            m[nums3[i]]++;
            m3[nums3[i]]++;
        }
        for(auto it : m)
        {
            if((m1.contains(it.first) && m2.contains(it.first)) || (m2.contains(it.first) && m3.contains(it.first)) || (m3.contains(it.first) && m1.contains(it.first)))
                ans.push_back(it.first);
        }
        return ans;
    }
};