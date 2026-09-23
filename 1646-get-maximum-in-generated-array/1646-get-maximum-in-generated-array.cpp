class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int>arr(n+1);
        arr[0]=0;
        arr[1]=1;
        for(int i=0;i<=n/2;i++)
        {
            if(i*2<=n)
                arr[i*2]=arr[i];
            if(i*2+1<=n)
                arr[i*2+1]=arr[i]+arr[i+1];
        }
        int ans=arr[0];
        for(int i=0;i<n+1;i++)
        {
            ans=max(arr[i],ans);
        }
        return ans;
    }
};