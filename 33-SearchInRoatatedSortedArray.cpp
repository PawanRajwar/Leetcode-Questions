#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If target is found
            if (nums[mid] == target) {
                return mid;  // Return the index of the found target
            }

            // If the left half is sorted
            if (nums[low] <= nums[mid]) {
                // Check if the target lies within the left half
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } 
            // Otherwise, the right half must be sorted
            else {
                // Check if the target lies within the right half
                if (target > nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;  // Return -1 if the target is not found
    }
};

int main() {
    Solution solution;

    // Example test case
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    // Call the search function
    int result = solution.search(nums, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
