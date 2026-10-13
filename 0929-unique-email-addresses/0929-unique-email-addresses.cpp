class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>s;
        for(int i=0;i<emails.size();i++)
        {
            string local="";
            string domain="";
            for(int j=0;j<emails[i].size();j++)
            {
                if(emails[i][j]=='.')
                    continue;
                else if(emails[i][j]=='+' || emails[i][j]=='@')
                    break;
                else
                    local+=emails[i][j];
            }
            for(int j=emails[i].size()-1;j>=0;j--)
            {
                if(emails[i][j]=='@')
                {
                    domain+='@';
                    break;
                }
                else
                    domain+=emails[i][j];
            }
            reverse(domain.begin(),domain.end());
            string email=local+domain;
            s.insert(email);
        }
        return s.size();
    }
};