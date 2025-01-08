#include <string>
#include <bitset>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        int aSize = a.length(), bSize = b.length();
        std::string result = "";
        char temp = '0';

        int maxSize = std::max(aSize, bSize);
        result.resize(maxSize + 1, '0');

        while (a.length() < maxSize) a = '0' + a;
        while (b.length() < maxSize) b = '0' + b;

        for (int i = maxSize - 1; i >= 0; i--) {
            if (a[i] == '1' && b[i] == '1') {
                result[i + 1] = temp;
                temp = '1';
            } else if (a[i] == '0' && b[i] == '0') {
                result[i + 1] = temp;
                temp = '0';
            } else {
                if (temp == '1') {
                    result[i + 1] = '0';
                    temp = '1';
                } else {
                    result[i + 1] = '1';
                    temp = '0';
                }
            }
        }
        
        if (temp == '1') {
            result[0] = '1';
        } else {
            result.erase(0, 1);
        }

        return result;
    }
};
