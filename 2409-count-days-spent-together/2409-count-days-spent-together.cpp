class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>alice(367,0);
        vector<int>bob(367,0);
        int ma1=stoi(arriveAlice.substr(0,2));
        int ma2=stoi(leaveAlice.substr(0,2));
        int da1=stoi(arriveAlice.substr(3,5));
        int da2=stoi(leaveAlice.substr(3,5));
        int mb1=stoi(arriveBob.substr(0,2));
        int mb2=stoi(leaveBob.substr(0,2));
        int db1=stoi(arriveBob.substr(3,5));
        int db2=stoi(leaveBob.substr(3,5));
        vector<int>months={0,31,28,31,30,31,30,31,31,30,31,30,31};
        vector<int>sum(13,0);
        sum[0]=months[0];
        for(int i=1;i<=12;i++)
            sum[i]=sum[i-1]+months[i];
        alice[sum[ma1-1]+da1]++;
        alice[sum[ma2-1]+da2+1]--;
        bob[sum[mb1-1]+db1]++;
        bob[sum[mb2-1]+db2+1]--;
        for(int i=1;i<367;i++)
            alice[i]+=alice[i-1];
        for(int i=1;i<367;i++)
            bob[i]+=bob[i-1];
        int ans=0;
        for(int i=1;i<366;i++)
        {
            if(alice[i]>0 && bob[i]>0)
                ans++;
        }
        return ans;
    }
};