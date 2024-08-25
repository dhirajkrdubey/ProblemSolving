class Solution {
public:

    long func(int firstHalf, bool isEven){
        long resulNum = firstHalf;

        if(isEven == false)
            resulNum /=10;

            while(firstHalf>0){
                int digit = firstHalf%10;
                resulNum = (resulNum*10) + digit;
                firstHalf /=10;
            }

            return resulNum;
    }
    string nearestPalindromic(string n) {
        int L = n.length();

        int mid = L/2;
        int firstHalfLength = (L%2) == 0? mid : mid+1;
        int firstHalf = stol(n.substr(0, firstHalfLength));

        vector <long> possibleResult;
            //these are the possiblities
        possibleResult.push_back(func(firstHalf+1, L%2==0));
        possibleResult.push_back(func(firstHalf, L%2==0));
        possibleResult.push_back(func(firstHalf-1, L%2==0));
        possibleResult.push_back(pow(10,L)+1);
        possibleResult.push_back(pow(10,L-1) - 1);
        
        long orignalNum = stol(n);
        long result = LONG_MAX;
        long diff = LONG_MAX;

    //from the possiblities check which one is min
        for(auto num : possibleResult){
            if(num == orignalNum) continue;

            if(abs(num - orignalNum) < diff){
                result = num;
                diff  = abs(num - orignalNum);
            }
            else if(abs(num - orignalNum) == diff){
                result = min(num, result);
            }
        }

            return to_string(result);

    }
};