class Solution {
public:
    bool isFascinating(int n) {
        int n2=2*n;
        int n3=3*n;
        vector<int>arr(9,0);
        string s1=to_string(n);
        string s2=to_string(n2);
        string s3=to_string(n3);
        s1+=s2;
        s1+=s3;
        if(s1.size()>9)
            return false;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='0')
                return false;
            else if(arr[s1[i]-49]==0)
                arr[s1[i]-49]++;
            else
                return false;
        }
        return true;
    }
};