// Last updated: 07/09/2026, 14:07:10
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = prices[0];
5        int profit=0;
6
7        for(int i =1; i<prices.size(); i++){
8            minPrice = min(minPrice, prices[i]);
9            profit= max(profit, prices[i]-minPrice);
10        }
11        return profit;
12    }
13};