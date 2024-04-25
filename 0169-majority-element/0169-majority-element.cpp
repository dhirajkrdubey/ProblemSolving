class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map <int,int> hash;
        int n = nums.size();
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
          }
        n = n/2;
       for(auto it:hash){
           if(it.second>n)
               return it.first;
        }
       
        
        return 0;
    }
};