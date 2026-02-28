/*
================================================================================
TWO SUM PROBLEM
================================================================================

PROBLEM STATEMENT:
Given an array of integers 'nums' and an integer 'target', return indices of 
the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may 
not use the same element twice.

You can return the answer in any order.

--------------------------------------------------------------------------------

EXAMPLES:

Example 1:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] = 2 + 7 = 9

Example 2:
Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
Explanation: nums[1] + nums[2] = 2 + 4 = 6

Example 3:
Input: nums = [3, 3], target = 6
Output: [0, 1]
Explanation: nums[0] + nums[1] = 3 + 3 = 6

--------------------------------------------------------------------------------

CONSTRAINTS:
- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists

================================================================================
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
================================================================================
APPROACH 1: BRUTE FORCE
================================================================================

IDEA:
Check every pair of numbers to see if they sum to target.

ALGORITHM:
1. Use two nested loops
2. For each element, check all elements after it
3. If sum equals target, return indices

TIME COMPLEXITY: O(n²) - nested loops
SPACE COMPLEXITY: O(1) - no extra space

PROS: Simple, easy to understand
CONS: Slow for large arrays
*/

vector<int> twoSumBruteForce(vector<int>& nums, int target) {
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    
    return {}; // No solution found
}

/*
================================================================================
APPROACH 2: HASH MAP (OPTIMAL)
================================================================================

IDEA:
Use a hash map to store numbers we've seen and their indices.
For each number, check if (target - current number) exists in the map.

ALGORITHM:
1. Create an empty hash map
2. For each number in array:
   - Calculate complement = target - current number
   - If complement exists in map, return [map[complement], current index]
   - Otherwise, store current number and its index in map
3. Continue until solution found

EXAMPLE WALKTHROUGH:
nums = [2, 7, 11, 15], target = 9

i=0: num=2, complement=7, map={}, add 2->0, map={2:0}
i=1: num=7, complement=2, map={2:0}, found! return [0, 1]

TIME COMPLEXITY: O(n) - single pass through array
SPACE COMPLEXITY: O(n) - hash map storage

PROS: Fast, efficient
CONS: Uses extra space
*/

vector<int> twoSumOptimal(vector<int>& nums, int target) {
    unordered_map<int, int> map; // value -> index
    
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // Check if complement exists in map
        if(map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        
        // Store current number and its index
        map[nums[i]] = i;
    }
    
    return {}; // No solution found
}

/*
================================================================================
MAIN FUNCTION - TEST CASES
================================================================================
*/

void printResult(vector<int>& result) {
    if(result.empty()) {
        cout << "No solution found" << endl;
    } else {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }
}

int main() {
    cout << "TWO SUM PROBLEM SOLUTIONS\n" << endl;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    cout << "Input: nums = [2, 7, 11, 15], target = 9" << endl;
    cout << "Brute Force: ";
    vector<int> result1 = twoSumBruteForce(nums1, target1);
    printResult(result1);
    cout << "Optimal: ";
    vector<int> result2 = twoSumOptimal(nums1, target1);
    printResult(result2);
    
    // Test Case 2
    cout << "\nTest Case 2:" << endl;
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    cout << "Input: nums = [3, 2, 4], target = 6" << endl;
    cout << "Brute Force: ";
    vector<int> result3 = twoSumBruteForce(nums2, target2);
    printResult(result3);
    cout << "Optimal: ";
    vector<int> result4 = twoSumOptimal(nums2, target2);
    printResult(result4);
    
    // Test Case 3
    cout << "\nTest Case 3:" << endl;
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    cout << "Input: nums = [3, 3], target = 6" << endl;
    cout << "Brute Force: ";
    vector<int> result5 = twoSumBruteForce(nums3, target3);
    printResult(result5);
    cout << "Optimal: ";
    vector<int> result6 = twoSumOptimal(nums3, target3);
    printResult(result6);
    
    // Test Case 4
    cout << "\nTest Case 4:" << endl;
    vector<int> nums4 = {-1, -2, -3, -4, -5};
    int target4 = -8;
    cout << "Input: nums = [-1, -2, -3, -4, -5], target = -8" << endl;
    cout << "Brute Force: ";
    vector<int> result7 = twoSumBruteForce(nums4, target4);
    printResult(result7);
    cout << "Optimal: ";
    vector<int> result8 = twoSumOptimal(nums4, target4);
    printResult(result8);
    
    return 0;
}

/*
================================================================================
KEY TAKEAWAYS
================================================================================

1. HASH MAP PATTERN: Very common in array problems
   - Store what you've seen
   - Check for complement/target

2. TRADE-OFF: Time vs Space
   - Brute Force: O(n²) time, O(1) space
   - Hash Map: O(n) time, O(n) space

3. WHEN TO USE EACH:
   - Small arrays: Brute force is fine
   - Large arrays: Hash map is necessary
   - Memory constrained: Consider brute force

4. VARIATIONS:
   - Two Sum II: Array is sorted (use two pointers)
   - Three Sum: Find triplets that sum to target
   - Four Sum: Find quadruplets that sum to target

================================================================================
*/
