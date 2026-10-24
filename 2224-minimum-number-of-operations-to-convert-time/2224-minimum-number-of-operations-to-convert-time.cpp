class Solution {
public:
    int convertTime(string current, string correct) {
        int h1=stoi(current.substr(0,2));
        int h2=stoi(correct.substr(0,2));
        int m1=stoi(current.substr(3,5));
        int m2=stoi(correct.substr(3,5));
        int ans=0;
        int diff;
        if(m1<=m2)
        {
            ans+=abs(h1-h2);
            diff=abs(m1-m2);
        }
        else
        {    
            ans+=abs(h1-h2)-1;
            diff=m2+60-m1;
        }
        ans+=diff/15;
        diff%=15;
        ans+=diff/5;
        diff%=5;
        ans+=diff;
        return ans;
    }
};