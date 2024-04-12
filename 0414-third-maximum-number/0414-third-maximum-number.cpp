class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long tmax = LLONG_MAX;
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i= nums.size()-1; i >=0; i--){
            if(nums[i]<tmax){
                count++;
                tmax = nums[i];
              }
            
            if(count == 3) break;
        }
        
        if(count < 3)
            tmax = nums[nums.size()-1];
        
        return (int)tmax;
    }
};


