#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        string binaryYear = bitset<16>(year).to_string();
        binaryYear.erase(0, binaryYear.find('1'));

        string binaryMonth = bitset<8>(month).to_string();
        binaryMonth.erase(0, binaryMonth.find('1'));

        string binaryDay = bitset<8>(day).to_string();
        binaryDay.erase(0, binaryDay.find('1'));
        
        return binaryYear + "-" + binaryMonth + "-" + binaryDay;
    }
};
