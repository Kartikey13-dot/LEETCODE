class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
        int maxi=0;
        int n=prices.size();
        int minnow=prices[0];
        int profit;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<minnow)
            minnow=prices[i];
            else
            {
               profit=prices[i]-minnow;
            }
           maxi=max(profit,maxi);
        }
        return maxi;
    }
};