class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        int i = 0;
        long long sum = 0;
        for(auto it: chalk){
        sum +=it;
        }

        long long iteration = k/sum;

        k = k - (sum * iteration);
        while(chalk[i%n]<=k){
            k -=chalk[i%n];
            i++;
        }
        return i%n;

    }
};