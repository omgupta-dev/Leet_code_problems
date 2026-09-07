class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans=0;
        for(int i=0;i<startTime.size();i++)
        {
            for(int j=startTime[i];j<=endTime[i];j++)
            {
                if(j==queryTime)
                    ans++;
            }
        }
        return ans;
    }
};