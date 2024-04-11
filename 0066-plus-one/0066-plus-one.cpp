class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
       for(int i=n-1; i>=0; i--){
            if(digits[i] == 9) {
                digits[i] = 0;
            }
            else if(digits[i] <9){
                digits[i]++;
                break;
            }
            if(i == 0)
            {
                digits[i] = 1;
                digits.emplace_back(0);
            }
       }


        return digits;
    }
};