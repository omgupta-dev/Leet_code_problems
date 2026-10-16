class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount%10==0)
            return (100-purchaseAmount);
        else if(purchaseAmount%10<5)
        {
            int n=purchaseAmount/10;
            return (100-n*10);
        }
        else
        {
            int n=purchaseAmount/10;
            n++;
            return (100-n*10);
        }
    }
};