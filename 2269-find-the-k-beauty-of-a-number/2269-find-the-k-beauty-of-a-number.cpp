class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans=0;
        string n=to_string(num);
        for(int i=0;i<=n.size()-k;i++)
        {
            string a=n.substr(i,k);
            int d=stoi(a);
            if(d==0) continue;
            if(num%d==0)
                ans++;
        }
        return ans;
    }
};