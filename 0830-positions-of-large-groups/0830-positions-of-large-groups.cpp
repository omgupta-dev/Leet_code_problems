class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        vector<int>start;
        vector<int>end;
        for(int i=0;i<s.size()-1;i++)
        {
            if(i==0)
                start.push_back(0);
            else if(s[i]!=s[i-1])
                start.push_back(i);
            if(s[i]!=s[i+1])
                end.push_back(i);
            else if(i+2==s.size())
                end.push_back(i+1);
        }
        for(int i=0;i<start.size();i++)
        {
            if(end[i]-start[i]+1>=3)
                ans.push_back({start[i],end[i]});
        }
        return ans;
    }
};