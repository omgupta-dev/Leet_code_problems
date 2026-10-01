class Solution {
    int isprime(int num)
    {
        if(num<=1) return 0;
        if(num==2) return 1;
        if(num==3) return 1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
                return 0;
        }
        return 1;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            int count=0;
            int temp=i;
            while(temp)
            {
                if(temp&1)
                    count++;
                temp/=2;
            }
            if(isprime(count))
                ans++;
        }
        return ans;
    }
};