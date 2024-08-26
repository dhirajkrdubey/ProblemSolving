class Solution {
public:
    bool repeatedSubstringPattern(string s) {
                int n = s.size();
                int i=1;
                while(i<=n/2){
                    if(n%i == 0){
                       string repeatedString = s.substr(0, i);
                       
                        for(int j=1; j<n/i; j++){
                            repeatedString += s.substr(0,i);
                        }
                        
                        if(repeatedString == s) return true;
                    }
                    i++;
                }

                return false;
    }
};