#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid; // Target found at index mid
            }
            if (nums[mid] < target) {
                low = mid + 1; // Search in the right half
            } else {
                high = mid - 1; // Search in the left half
            }
        }
        return -1; // Target not found
    }
};

int main() {
    Solution solution;

    // Example test case
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    
    // Call the search function
    int result = solution.search(nums, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
