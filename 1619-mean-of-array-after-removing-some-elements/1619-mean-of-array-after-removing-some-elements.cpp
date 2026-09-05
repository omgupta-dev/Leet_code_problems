class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int k=0.05*arr.size();
        double sum=0;
        int size=arr.size()-2*k;
        for(int i=k;i<arr.size()-k;i++)
        {
            sum+=arr[i];
        }
        return sum/size;
    }
};