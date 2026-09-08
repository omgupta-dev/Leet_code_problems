class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>arr;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                int f=arr[arr.size()-2];
                int s=arr[arr.size()-1];
                arr.pop_back();
                arr.pop_back();
                arr.push_back(f+s);
            }
            else if(tokens[i]=="*")
            {
                int f=arr[arr.size()-2];
                int s=arr[arr.size()-1];
                arr.pop_back();
                arr.pop_back();
                arr.push_back(f*s);
            }
            else if(tokens[i]=="-")
            {
                int f=arr[arr.size()-2];
                int s=arr[arr.size()-1];
                arr.pop_back();
                arr.pop_back();
                arr.push_back(f-s);
            }
            else if(tokens[i]=="/")
            {
                int f=arr[arr.size()-2];
                int s=arr[arr.size()-1];
                arr.pop_back();
                arr.pop_back();
                arr.push_back(f/s);
            }
            else
                arr.push_back(stoi(tokens[i]));
        }
        return arr[0];
    }
};