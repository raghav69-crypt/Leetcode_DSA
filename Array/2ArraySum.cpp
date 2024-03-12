// Include necessary headers
#include <bits/stdc++.h>

// Define a function to reverse a vector
vector<int> reverse(vector<int> v) {
    // Initialize start and end indices for reversing
    int s = 0;
    int e = v.size() - 1;

    // Reverse the vector
    while (s < e) {
        swap(v[s++], v[e--]);
    }

    // Return the reversed vector
    return v;
}

// Define a function to find the sum of two arrays represented as vectors
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    // Initialize iterators and variables
    int i = n - 1;
    int j = m - 1;
    vector<int> ans; // Vector to store the result
    int carry = 0; // Variable to store carry during addition

    // Add corresponding elements from both vectors and handle carry
    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }

    // Handle remaining elements in the first array
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Handle remaining elements in the second array
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Handle any remaining carry
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // Reverse the result vector and return
    return reverse(ans);
}
 