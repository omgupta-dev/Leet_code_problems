class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        vector<int>n(num,0);
        int k=0;
        while(sum)
        {
            if(sum!=0 && k==n.size()) return "";
            if((sum-9)>=0)
            {
                n[k++]=9;
                sum-=9;
            }
            else
            {
                n[k]=sum;
                sum-=sum;
            }
        }
        string ans=to_string(n[0]);
        if(n.size()==1) return ans;
        for(int i=1;i<n.size();i++)
        {
            string l=to_string(n[i]);
            ans+=l;
        }
        return ans;
    }
};