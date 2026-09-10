class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.contains(nums[i]))
            {
                m[nums[i]]++;
            }
            else
            {
                m[nums[i]]=1;
            }
        }
        int k=0;
        vector<int>ans;
        while(k<nums.size())
        {
            unordered_map<int,int> :: iterator it=m.begin();
            int mini=it->second;
            int val=it->first;
            it++;
            while(it!=m.end())
            {
                if((it->second)<mini || (it->second == mini && it->first > val))
                {
                    mini=it->second;
                    val=it->first;
                }
                it++;
            }
            for(int i=0;i<mini;i++)
                ans.push_back(val);
            m.erase(val);
            k+=mini;
        }
        return ans;
    }
};