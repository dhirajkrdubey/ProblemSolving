class Solution {
public:
   vector <int> twoSum(vector <int> arr, int target){

    map <int,int> mpp;

    for(int i=0; i<arr.size(); i++){
            int left = target - arr[i];
        if(mpp.find(left)  !=  mpp.end()){
                return {mpp[left], i};
        }

       mpp[arr[i]] = i;
    }
     return {-1,-1};
}
};