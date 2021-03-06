/**
 * Code description
 *
 * Author: xpharry
 * Date: 11/11/2018
 *
 * Data structure:
 *    Array
 *
 * Idea:
 *
 * Complexity:
 *    Time: O(?)
 *
 */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	for (int i = nums.size() - 2; i >= 0; i--) {
    		if (nums[i] < nums[i + 1]) {
                for (int j = nums.size() - 1; j > i; j--) {
                    if (nums[j] > nums[i]) {
                        swap(nums[i], nums[j]);
                        sort(nums.begin() + i + 1, nums.end());
                        return;
                    }

                }
    		}
    	}
    	reverse(nums.begin(), nums.end());
    }
};
