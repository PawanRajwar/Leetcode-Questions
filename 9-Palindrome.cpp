#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int original = x;
        long ans = 0;
        while (x != 0) {
            int digit = x % 10;
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return original == ans;
    }
};

int main() {
    Solution solution;
    int input;

    cout << "Enter an integer: ";
    cin >> input;

    if (solution.isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
