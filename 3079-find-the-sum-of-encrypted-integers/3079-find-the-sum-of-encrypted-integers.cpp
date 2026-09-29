class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        vector<int>encrypt(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int maxi=0;
            int count=0;
            while(temp)
            {
                count++;
                int digit=temp%10;
                if(digit>maxi)
                    maxi=digit;
                temp/=10;
            }
            int num=0;
            int j=1;
            while(count)
            {
                num+=j*maxi;
                j*=10;
                count--;
            }
            encrypt[i]=num;
        }
        int ans=0;
        for(int i=0;i<encrypt.size();i++)
            ans+=encrypt[i];
        return ans;
    }
};