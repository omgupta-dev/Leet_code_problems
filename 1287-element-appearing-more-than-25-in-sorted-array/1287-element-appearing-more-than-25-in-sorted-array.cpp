class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int k=arr.size()*0.25;
        int flag=-1;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            if(m.contains(arr[i]))
            {
                m[arr[i]]++;
            }
            else
            {
                m[arr[i]]=1;
            }
        }
        map<int,int> :: iterator it=m.begin();
        while(it!=m.end())
        {
            if(it->second>k)
            {
                flag=it->first;
                break;
            }
            it++;
        }
        if(flag>-1)
            return flag;
        else
            return flag; 
    }
};