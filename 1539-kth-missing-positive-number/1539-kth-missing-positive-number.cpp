class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans;
        int mini=1;
        int maxi=arr[arr.size()-1];
        for(int i=mini;i<=maxi;i++)
        {
            if(find(arr.begin(),arr.end(),i)==arr.end())
                k--;
            if(k==0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};