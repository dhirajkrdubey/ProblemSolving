class Solution {
public:
    int arrangeCoins(int n) {
        int check = n;
        for(int i=1; i<=n; i++){
            if(check - i >0)
            check -=i;
            else if(check - i==0)
            return i;
            else
            return i-1;
        }

        return 0;


    }
};