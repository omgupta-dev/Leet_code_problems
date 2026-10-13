class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double total=0;
        for(int i=1;i<salary.size()-1;i++)
            total+=salary[i];
        double ans=total/(salary.size()-2);
        return ans;
    }
};