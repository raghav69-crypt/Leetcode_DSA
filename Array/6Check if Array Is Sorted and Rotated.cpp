class Solution {
public:
   bool check(vector<int>& nums) {
        // Initializing a count variable to track the number of out-of-order elements.
        int count = 0;
        
        // Getting the size of the array.
        int n = nums.size();
        
        // Loop through the array to count the number of out-of-order elements.
        for (int i = 1; i < n; i++) {
            // If the previous element is greater than the current element, increment count.
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }
        
        // Check if the last element is greater than the first element.
        if (nums[n - 1] > nums[0]) {
            count++;
        }
        
        // Return true if there is at most one out-of-order element, otherwise return false.
        return count <= 1;
    }
};