class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>index;
        for(int i=0;i<nums.size();i++)
        {
            int flag=1;
            if(nums[i]<2)
                flag=0;
            else
            {
                for(int j=2;j<nums[i];j++)
                {
                    if(nums[i]%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
                index.push_back(i);
        }
        return index[index.size()-1]-index[0];
    }
};