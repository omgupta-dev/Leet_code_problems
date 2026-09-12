class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>m;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int val=0;
            int temp=i;
            while(temp)
            {
                val+=temp%10;
                temp/=10;
            }
            m[val]++;
        }
        int maxi=0;
        for(auto it : m)
        {
            if(maxi<it.second)
                maxi=it.second;
        }
        return maxi;
    }
};