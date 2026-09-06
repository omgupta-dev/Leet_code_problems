class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int ans=0;
        vector<char>prime(n,true);
        prime[0]=prime[1]=false;
        for(int i=3;i<n;i++)
        {
            if(i%2==0) prime[i]=false;
        }
        for(int i=3;i*i<n;i+=2)
        {
            if(prime[i])
            {
                for(int j=i*i;j<n;j+=2*i)
                {
                    prime[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i])
                ans++;
        }
        return ans;
    }
};