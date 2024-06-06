class Solution {
public:
    void fillCount(string& words,int count[26]){
        for(char &ch:words){
            count[ch-'a']++;
        }
    }
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector <string> ans;
        int count[26] = {0};
        
        fillCount(words[0],count);
        
        for(int i=1; i<n; i++){
            int temp[26]={0};
            
            fillCount(words[i],temp);
            
            for(int i=0; i<26; i++){
                count[i] = min(count[i],temp[i]);
            }
        }
        
        for(int i=0; i<26; i++){
            int store = count[i];
            
            while(store--){
                ans.emplace_back(string(1,i+'a'));
            }
        }
        
        return ans;
    }
};