class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        for(int i=0;i<digits.size();i++)
        {
            if(digits[i])
            {
                for(int j=0;j<digits.size();j++)
                {
                    for(int k=0;k<digits.size();k++)
                    {
                        if(i!=j && j!=k && i!=k && digits[k]%2==0)
                        {
                            int num=digits[i]*100+digits[j]*10+digits[k];
                            if(find(ans.begin(),ans.end(),num)==ans.end())
                                ans.push_back(num);
                        }
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};