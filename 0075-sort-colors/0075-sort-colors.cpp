class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> store;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                store.emplace_back(0);
           }
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1)
                store.emplace_back(1);
           }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==2)
                store.emplace_back(2);
           }
        
        nums = store;
        
    }
};