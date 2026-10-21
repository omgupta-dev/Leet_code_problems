class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string,int>ban;
        for(int i=0;i<bannedWords.size();i++)
            ban[bannedWords[i]]++;
        int count=0;
        for(int i=0;i<message.size();i++)
        {
            if(ban.contains(message[i]))
                count++;
        }
        if(count>=2)
            return true;
        return false;
    }
};