class Solution {
public:
    string capitalizeTitle(string title) {
        string ans="";
        string temp="";
        for(int i=0;i<title.size();i++)
        {
            if(title[i]==' ')
            {
                if(temp.size()<=2)
                {
                    for(int j=0;j<temp.size();j++)
                    {
                        temp[j]=tolower(temp[j]);
                    }
                }
                else
                {
                    temp[0]=toupper(temp[0]);
                    for(int j=1;j<temp.size();j++)
                    {
                        temp[j]=tolower(temp[j]);
                    }
                }
                ans+=temp;
                ans+=' ';
                temp="";
            }
            else
            {
                temp+=title[i];
            }
        }
        if(temp.size()<=2)
            {
                for(int j=0;j<temp.size();j++)
                {
                    temp[j]=tolower(temp[j]);
                }
            }
        else
        {
            temp[0]=toupper(temp[0]);
            for(int j=1;j<temp.size();j++)
            {
                temp[j]=tolower(temp[j]);
            }
        }
        ans+=temp;
        temp="";
        return ans;
    }
};