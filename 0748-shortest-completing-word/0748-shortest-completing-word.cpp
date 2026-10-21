class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int>plate(26,0);
        for(int i=0;i<licensePlate.size();i++)
        {
            if(licensePlate[i]>=65 && licensePlate[i]<=90)
                plate[licensePlate[i]-'A']++;
            else if(licensePlate[i]>=97 && licensePlate[i]<=122)
                plate[licensePlate[i]-'a']++;
        }
        int mini=INT_MAX;
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            vector<int>freq(26,0);
            for(int j=0;j<words[i].size();j++)
                freq[words[i][j]-'a']++;
            int flag=1;
            for(int j=0;j<26;j++)
            {
                if(freq[j]<plate[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                if(words[i].size()<mini)
                {
                    mini=words[i].size();
                    ans=words[i];
                }
            }
        }
        return ans;
    }
};