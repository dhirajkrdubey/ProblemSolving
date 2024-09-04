class Solution {
public:
    int getLucky(string s, int k) {
        int size = s.length();
        string conv = "";
        for(int i=0; i<size; i++){
           int cnvt = (s[i] - 'a')+1;
            conv = conv + to_string(cnvt);  
        }
        int transNum = 0;
        for(int i=0; i<conv.size(); i++){
            transNum = transNum + (conv[i] - '0');
        }

       while(--k){
        int cntr = log10(transNum) + 1;
        int temp = transNum;
        transNum = 0;
            while(cntr--){
                transNum = transNum + temp%10;
                temp /=10;
            }
       }

       return transNum;
    }
};