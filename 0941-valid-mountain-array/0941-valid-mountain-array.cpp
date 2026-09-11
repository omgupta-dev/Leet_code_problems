class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int maxi=arr[0];
        int maxidx=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                maxidx=i;
            }
        }
        if(maxi==arr[0] || maxi==arr[arr.size()-1]) return false;
        for(int i=1;i<=maxidx;i++)
        {
            if(arr[i]<=arr[i-1])
                return false;
        }
        for(int i=maxidx+1;i<arr.size();i++)
        {
            if(arr[i]>=arr[i-1])
                return false;
        }
        return true;
    }
};