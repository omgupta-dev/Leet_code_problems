class Solution {
    bool is_palindrome(string s,long long l,long long r)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return is_palindrome(s,l+1,r) || is_palindrome(s,l,r-1);
            }
            else
            {
                l++;
                r--;
            }
        }
        return true;
    }
};