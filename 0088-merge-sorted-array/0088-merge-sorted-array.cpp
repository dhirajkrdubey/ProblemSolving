class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> store ;
        
        for(int i=0; i<m; i++){
            store.emplace_back(nums1[i]);
            }
        for(int i=0; i<n; i++){
            store.emplace_back(nums2[i]);
                }
        sort(store.begin(),store.end());
        
        for(int i=0; i<store.size(); i++)
            nums1[i] = store[i];
    }
};