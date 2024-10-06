#include <iostream>
#include <limits.h> // For INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;

            // Check for overflow/underflow
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int input;

    cout << "Enter an integer to reverse: ";
    cin >> input;

    int reversedNumber = solution.reverse(input);
    if (reversedNumber == 0) {
        cout << "Reversal overflowed." << endl;
    } else {
        cout << "Reversed integer: " << reversedNumber << endl;
    }

    return 0;
}
