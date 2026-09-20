class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int mdiff=abs(arr[1]-arr[0]);
        for(int i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i+1]-arr[i])<mdiff)
                mdiff=abs(arr[i+1]-arr[i]);
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            vector<int>p;
            if(abs(arr[i+1]-arr[i])==mdiff)
            {
                p.push_back(arr[i]);
                p.push_back(arr[i+1]);
            }
            if(!p.empty())
                ans.push_back(p);
        }
        return ans;
    }
};