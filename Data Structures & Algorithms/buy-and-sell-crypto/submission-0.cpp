class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        if(n == 1) return 0;

        int i = 0;
        int j = 1;
        int bestProfit = 0;

        while(j < n){

            if(prices[j] > prices[i]){
                int currProfit = prices[j] - prices[i];
                if(currProfit > bestProfit) bestProfit = currProfit;
            }
            else{
                i = j;
            }
            j++;
        }
        return bestProfit;
    }
};