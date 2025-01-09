#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        char aChar = '0', bChar = '0', temp = '0';

        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || temp == '1') {
            if (i >= 0) aChar = a[i--];
            else aChar = '0';
            if (j >= 0) bChar = b[j--];
            else bChar = '0';

            int sum = (aChar - '0') + (bChar - '0') + (temp - '0');
            if (sum >= 2) temp = '1';
            else temp = '0';

            result.push_back(sum % 2 + '0');
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};