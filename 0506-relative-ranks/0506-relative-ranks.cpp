class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector <string> rank(n);
        vector <int> store = score;
        sort(store.begin(),store.end(), greater <int>());
        
        unordered_map <int,int> umap;
        
        for(int i=0; i<n; i++){
            umap[store[i]] = i+1;
            }
        
       for(int i=0; i<n; i++){
           cout << umap[score[i]];
       }
        
        for(int i=0; i<n; i++){
           if(umap[score[i]] == 1)
               rank[i]  = "Gold Medal";
            else if(umap[score[i]] == 2)
                rank[i] = "Silver Medal";
            else if(umap[score[i]] == 3) 
                rank[i] = "Bronze Medal";
            else {
                string s = to_string(umap[score[i]]);
                rank[i] = s;
            }
        }
        return rank;
    }
};