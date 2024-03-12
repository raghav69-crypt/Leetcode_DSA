class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0; // Initialize a counter to count consecutive ones
        int maxi = 0; // Initialize a variable to store the maximum consecutive ones encountered
        
        // Iterate through the array
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) { // If the current element is 1
                cnt++; // Increment the counter for consecutive ones
                maxi = max(maxi, cnt); // Update the maximum consecutive ones encountered
            } else { // If the current element is not 1
                cnt = 0; // Reset the counter for consecutive ones
            }
        }
        
        return maxi; // Return the maximum consecutive ones encountered
    }
};
