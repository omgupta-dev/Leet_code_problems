class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int mini=min(num1.size(),num2.size());
        int carry=0;
        for(int i=0;i<mini;i++)
        {
            int n1=num1[i]-'0';
            int n2=num2[i]-'0';
            int sum=carry+n1+n2;
            char n='0'+(sum%10);
            carry=sum/10;
            ans+=n;
        }
        if(mini!=num1.size())
        {
            for(int i=mini;i<num1.size();i++)
            {
                int n1=num1[i]-'0';
                int sum=carry+n1;
                char n='0'+(sum%10);
                carry=sum/10;
                ans+=n;
            }
        }
        if(mini!=num2.size())
        {
            for(int i=mini;i<num2.size();i++)
            {
                int n2=num2[i]-'0';
                int sum=carry+n2;
                char n='0'+(sum%10);
                carry=sum/10;
                ans+=n;
            }
        }
        if(carry)
        {
            char n='0'+carry;
            ans+=n;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};