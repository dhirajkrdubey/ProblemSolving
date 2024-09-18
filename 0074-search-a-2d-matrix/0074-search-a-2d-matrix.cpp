class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix[0].size()-1;

        while(low < matrix.size() && high < matrix[0].size()){
           
            if(matrix[low][high] == target) return 1;
            else if(matrix[low][high] <= target) low++;
            else high--;
        }
         cout << low << " " << high;
        cout << matrix.size() << " " << matrix[0].size();
        return 0;
    }
};

