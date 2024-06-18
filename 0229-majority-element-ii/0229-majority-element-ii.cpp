class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        map <int,int> mp;
        vector <int> store;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        
        for(auto it: mp){
            if(it.second > (n/3))
                store.emplace_back(it.first);
          }
        
        return store;
    }
};