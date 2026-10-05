class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int maxl=0;
        int maxr=0;
        int l=0;
        int r=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L' || moves[i]=='_')
                l++;
            if(moves[i]=='R')
                l--;
            maxl=(maxl,l);
        }
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='R' || moves[i]=='_')
                r++;
            if(moves[i]=='L')
                r--;
            maxr=(maxr,r);
        }
        return max(maxl,maxr);
    }
};