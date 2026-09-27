class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        while(!m.empty())
        {
            auto it=m.begin();
            while(it!=m.end())
            {
                if(it->second>=1)
                {
                    ans.push_back(it->first);
                    it->second--;
                }
                if(it->second==0)
                    it=m.erase(it);
                else
                    it++;
            }
        }
        return ans;
    }
};