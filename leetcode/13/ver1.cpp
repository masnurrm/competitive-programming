#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int numInt = 0;
        int romanLength = s.length();
        int arrInt[romanLength];
        
        for (int i = 0; i < romanLength; i++) {
            if (s[i] == 'M') arrInt[i] = 1000;
            else if (s[i] == 'D') arrInt[i] = 500;
            else if (s[i] == 'C') arrInt[i] = 100;
            else if (s[i] == 'L') arrInt[i] = 50;
            else if (s[i] == 'X') arrInt[i] = 10;
            else if (s[i] == 'V') arrInt[i] = 5;
            else if (s[i] == 'I') arrInt[i] = 1;
        }

        numInt = arrInt[0];
        for (int i = 1; i < romanLength; i++) {
            numInt += arrInt[i];
            if (arrInt[i] > arrInt[i - 1]) numInt -= 2 * (arrInt[i - 1]); 
        }

        return numInt;
    }
};