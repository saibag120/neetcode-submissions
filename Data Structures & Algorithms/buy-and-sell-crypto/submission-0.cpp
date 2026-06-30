class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=i+1;
        int profit=0;
        while(j<prices.size()){
            if(prices[j]<=prices[i]){
                i =j;
                j=i+1;
            }
            else if(prices[j]>prices[i] && prices[j]-prices[i]>profit){
                profit=prices[j]-prices[i];
                j++;
            }
            else if(prices[j]>prices[i] && prices[j]-prices[i]<=profit){
                j++;
            }
        }
        return profit;
    }
};
