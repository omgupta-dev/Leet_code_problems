class Solution {
    bool ispalindrome(string n)
    {
        long long l=0;
        long long r=n.size()-1;
        while(l<r)
        {
            if(n[l]!=n[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++)
        {
            long long sum=0;
            int temp=n;
            int k=0;
            while(temp)
            {
                long long digit=temp%i;
                sum+=(digit*pow(10,k));
                temp/=i;
                k++;
            }
            string p=to_string(sum);
            if(!ispalindrome(p)) return false;
        }
        return true;
    }
};