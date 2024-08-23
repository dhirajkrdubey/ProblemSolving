class Solution {
public:
    string fractionAddition(string expression) {
        int nume = 0;
        int deno = 1;

        int n = expression.length();
        int i = 0;

        while(i<n){
            int currNume = 0;
            int currDeno = 0;
            bool isNeg = (expression[i] == '-');

            if(expression[i] == '-' || expression[i] == '+')
            i++;

            //to build the numerator;
            while(i<n && isdigit(expression[i])){
                int val = expression[i] - '0';
                currNume = (currNume*10) + val;
                i++;
            }
            i++; // to move ahead of division symbol 

            if(isNeg == true)
            currNume *= -1;

            //to build the denomenator;
            while(i<n && isdigit(expression[i])){
                int val = expression[i] - '0';
                currDeno  = (currDeno*10) + val;
                i++;
            }
            
            //to update the numerator & denomenator
            nume = (nume*currDeno)+(deno*currNume);
            deno = deno * currDeno;

            //to reduce the fraction to irreducable form
            int GCD  = abs(__gcd(nume, deno)); // used abs as -num gcd will be -
            nume /= GCD;
            deno /= GCD;
        }

        return to_string(nume) + "/" + to_string(deno);
    }
};