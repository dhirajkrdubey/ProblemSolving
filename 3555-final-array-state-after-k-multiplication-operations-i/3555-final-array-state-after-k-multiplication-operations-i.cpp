class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

            while(k--){
                int small = INT_MAX;
                int smallIndex = -1;
                for(int i=0; i<nums.size(); i++){
                     if(nums[i]<small){
                        small = nums[i];
                        smallIndex = i;
                     }
                }

                nums[smallIndex] *=multiplier;
            }

            return nums;
    }
};