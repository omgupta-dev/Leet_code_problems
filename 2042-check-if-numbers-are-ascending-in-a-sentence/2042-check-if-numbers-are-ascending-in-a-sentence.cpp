class Solution {
public:
    bool areNumbersAscending(string s) {
        int ans=0;
        vector<int>nums;
        string word="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=48 && s[i]<=57)
                word+=s[i];
            else if(!word.empty())
            {
                int n=stoi(word);
                nums.push_back(n);
                word="";
            }
        }
        if(!word.empty())
        {
            int n=stoi(word);
            nums.push_back(n);
            word="";
        }
        if(nums.size()<=1) return true;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
                return false;
        }
        return true;
    }
};