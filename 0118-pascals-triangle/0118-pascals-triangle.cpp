class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> store(numRows);
        store[0].emplace_back(1);
        
        // for row traversal
        for(int i=1; i<numRows; i++){
            
            store[i].emplace_back(1);
            int product = 1;
            int n = i;
            for(int j=1; j<=i; j++){
                product = (product* n)/j;           
                n--;
                store[i].emplace_back(product);
            }
             }
        
        return store;
    }
};