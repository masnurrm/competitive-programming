using namespace std;

class Solution {
public:
    int sumSquare(int n) {
        int sum = 0, digit;
        
        while (n) {
            digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int ptr1 = n, ptr2 = n;

        do {
            ptr1 = sumSquare(ptr1);
            ptr2 = sumSquare(sumSquare(ptr2));
        } while (ptr1 != ptr2);

        return ptr1 == 1;

        // while (ptr1 != ptr2) {
        //     ptr1 = sumSquare(ptr1);
        //     ptr2 = sumSquare(sumSquare(ptr2));
        //     cout << ptr1 << " " << ptr2 << endl;
        //     if (ptr1 == ptr2) {
        //         break;
        //     }
        // }
        // return ptr1 == 1;
    }
};