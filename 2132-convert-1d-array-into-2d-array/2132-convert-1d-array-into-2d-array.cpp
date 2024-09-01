class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int siz = original.size();
        int sizeOfMatrix = m*n;
        if(sizeOfMatrix!=siz) return {};
        vector <vector<int>> ans(m);

            int cntr = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i].push_back(original[cntr]);
                cntr++;
            }
        }

        return ans;
    }
};