class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        while(nums.size())
        {
            if(nums.size()==1)
            {
                ans+=nums[0];
                nums.pop_back();
                continue;
            }
            int f=nums[0];
            int l=nums[nums.size()-1];
            string f1=to_string(f);
            string l1=to_string(l);
            f1+=l1;
            int val=stoi(f1);
            nums.pop_back();
            nums.erase(nums.begin());
            ans+=val;
        }
        return ans;
    }
};