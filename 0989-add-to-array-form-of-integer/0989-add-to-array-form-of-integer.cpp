class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        vector<int>ans;
        reverse(num.begin(),num.end());
        for(int i=0;i<num.size();i++)
        {
            int digit=k%10;
            k/=10;
            int sum=carry+digit+num[i];
            ans.push_back(sum%10);
            carry=sum/10;
        }
        if(k)
        {
            while(k)
            {
                int digit=k%10;
                k/=10;
                int sum=digit+carry;
                ans.push_back(sum%10);
                carry=sum/10;
            }
        }
        if(carry)
        {
            while(carry)
            {
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};