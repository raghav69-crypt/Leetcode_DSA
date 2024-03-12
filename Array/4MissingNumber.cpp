class Solution
{
    public:
      int missingNumber(vector<int> &nums) {
        long n = nums.size();
    return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);  // Subtraction of sum of numbers and sum of n numbers : Returns the solution
      }
};
