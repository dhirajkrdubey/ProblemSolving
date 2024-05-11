class Solution {
public:
    int maxProfit(vector<int>& arr) {
            int n = arr.size();
        
       int miini = arr[0];
        int profit = 0;
        
        for(int i=1; i<n; i++){
      int cost = arr[i] - miini;
            profit = max(profit, cost);
            miini = min(arr[i],miini);
        }
        
        return profit;
    }
};