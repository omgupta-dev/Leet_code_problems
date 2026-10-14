class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int l=0;
        int r=height.size()-1;
        while(l<r)
        {
            int h=min(height[l],height[r]);
            int water=(r-l)*h;
            if(maxi<water)
                maxi=water;
            if(h==height[l])
                l++;
            else if(h==height[r])
                r--;
        }
        return maxi;
    }
};