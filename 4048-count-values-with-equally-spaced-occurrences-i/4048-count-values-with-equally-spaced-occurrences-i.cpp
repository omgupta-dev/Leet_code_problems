class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>special;
        for(auto it : m)
        {
            if(it.second==3)
                special.push_back(it.first);
        }
        for(int i=0;i<special.size();i++)
        {
            int f,s,t;
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(count==0 && nums[j]==special[i])
                {
                    f=j;
                    count++;
                }
                else if(count==1 && nums[j]==special[i])
                {
                    s=j;
                    count++;
                }
                else if(count==2 && nums[j]==special[i])
                {
                    t=j;
                    count++;
                }
                else if(count>2)
                    break;
            }
            if((s-f)==(t-s))
                ans++;
        }
        return ans;
    }
};