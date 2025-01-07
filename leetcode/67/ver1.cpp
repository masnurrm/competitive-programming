#include <string>
#include <bitset>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        
        unsigned long long sum = std::stoull(a, nullptr, 2) + std::stoull(b, nullptr, 2);
        
        std::string binarySum = std::bitset<64>(sum).to_string();
        
        size_t pos = binarySum.find('1');
        if (pos != std::string::npos) {
            return binarySum.substr(pos);
        }
        return "0";
    }
};