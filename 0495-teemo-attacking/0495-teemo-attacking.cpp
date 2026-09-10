class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()==1) return duration;
        long long ans=timeSeries.size()*duration;
        int diff=0;
        for(int i=1;i<timeSeries.size();i++)
        {
            if(timeSeries[i]-(timeSeries[i-1]+duration)<0)
            {
                ans+=timeSeries[i]-(timeSeries[i-1]+duration);
            }
        }
        return ans;
    }
};