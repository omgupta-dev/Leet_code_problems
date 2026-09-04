class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        bool flag=true;
        sort(arr.begin(),arr.end());
        int k=arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]!=k)
                flag=false;
        }
        return flag;
    }
};