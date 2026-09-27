class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,vector<int>>suit;
        unordered_map<int,vector<char>>rank;
        for(int i=0;i<ranks.size();i++)
        {
            suit[suits[i]].push_back(ranks[i]);
            rank[ranks[i]].push_back(suits[i]);
        }
        for(auto it : suit)
        {
            if((it.second).size()==5)
                return "Flush";
        }
        for(auto it : rank)
        {
            if((it.second).size()>=3)
                return "Three of a Kind";
        }
        for(auto it : rank)
        {
            if((it.second).size()==2)
                return "Pair";
        }
        return "High Card";
    }
};