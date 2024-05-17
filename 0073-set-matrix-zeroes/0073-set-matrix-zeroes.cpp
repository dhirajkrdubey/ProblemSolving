class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<vector<int>> store = matrix;
        for(int i=0; i<store.size(); i++){
            for(int j=0; j<store[i].size(); j++){
                
                if(store[i][j]==0){
                    for(int k=0; k<store[i].size();k++){
                        matrix[i][k] = 0;
                    }
                    for(int k=0; k<store.size(); k++){
                        matrix[k][j] =0;
                      }
                 }
              }
        }
    }
};