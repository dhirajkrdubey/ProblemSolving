class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
               int sum;
                if(i != j){
                    sum = nums[i] + nums[j];
                }
                if(sum == target)
                return {i,j};
            }
        }

        return  {0,8};
    }
};