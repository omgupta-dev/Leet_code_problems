class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum1=0;
        long long sum2=0;
        for(int i : source)
            sum1+=i;
        for(int i : target)
            sum2+=i;
        if(sum1==sum2)
            return true;
        return false;
    }
};