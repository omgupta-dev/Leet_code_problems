class Solution {
public:
    int reverseBits(int n) {
        vector<long long>b(32,0);
        int k=31;
        while(n)
        {
            b[k]=n%2;
            n/=2;
            k--;
        }
        k=0;
        int ans=0;
        while(k<32)
        {
            ans+=b[k]*pow(2,k);
            k++;
        }
        return ans;
    }
};