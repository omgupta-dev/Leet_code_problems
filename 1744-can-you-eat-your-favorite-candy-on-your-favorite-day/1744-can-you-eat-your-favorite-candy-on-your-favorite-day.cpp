class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        vector<long long>prefixsum(candiesCount.size());
        prefixsum[0]=candiesCount[0];
        for(int i=1;i<candiesCount.size();i++)
            prefixsum[i]=prefixsum[i-1]+candiesCount[i];
        vector<bool>ans(queries.size());
        for(int i=0;i<queries.size();i++)
        {
            long long favcandy=queries[i][0];
            long long favday=queries[i][1];
            long long dailycap=queries[i][2];
            long long candiesBeforeFavcandy=(favcandy==0)?0:prefixsum[favcandy-1];
            if((favday+1)*dailycap<=candiesBeforeFavcandy)
            {
                ans[i]=false;
                continue;
            }
            if((queries[i][1]+1)>prefixsum[queries[i][0]])
            {
                ans[i]=false;
            }
            else
                ans[i]=true;
        }
        return ans;
    }
};