class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> ans;
        map  <int,int> mp;
            
            for(auto num:arr1){
                mp[num]++;
              }
        
        for(auto num:arr2){
            while(mp[num]--){
                ans.emplace_back(num);
               }
        }
        
       for(auto num: mp){
                if(num.second>0){
                    while(num.second--){
                        ans.emplace_back(num.first);
                       }
                  }
       }
        
        
        return ans;
    }
};