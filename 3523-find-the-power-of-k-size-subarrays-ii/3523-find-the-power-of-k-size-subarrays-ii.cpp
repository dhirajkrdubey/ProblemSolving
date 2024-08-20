class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j=0;
        vector <int> ans;
        int tcnt = 1;
        // if(n == 1){
        //     ans.emplace_back(nums[0]);
        //     return ans;
        // } 
        // else if(n == 2){
        //     ans.emplace_back(nums[1]);
        //     return ans;
        // }
        while(j < k-1){
            if(nums[j] < nums[j+1] && nums[j+1] - nums[j] == 1)
            tcnt++;

            j++;
        }
        if(tcnt ==k)ans.emplace_back(nums[j]);
        else ans.emplace_back(-1);
        while(j < n-1){
            if(nums[i] < nums[i+1] && nums[i+1] - nums[i] == 1){
                i++;
                tcnt--;
            }
            else i++;
            if(nums[j] < nums[j+1] && nums[j+1] - nums[j] == 1){
                tcnt++;
            }
            if(tcnt == k){
                j++;
                ans.emplace_back(nums[j]);
            }
            else{
                j++;
                 ans.emplace_back(-1);
            }

        }
        return ans;
    }
};

// 1 2 3 4 3 2 5
// 1 2 3 -- tcnt = 3
// 3 4 3 