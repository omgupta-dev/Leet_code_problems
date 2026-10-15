class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        vector<int>range(n+1,0);
        for(int i=0;i<bookings.size();i++)
        {
            range[bookings[i][0]-1]+=bookings[i][2];
            range[bookings[i][1]]-=bookings[i][2];
        }
        for(int i=1;i<n+1;i++)
        {
            range[i]+=range[i-1];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]+=range[i];
        }
        return ans;
    }
};