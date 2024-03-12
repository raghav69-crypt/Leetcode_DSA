#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
     vector<vector<int>> ans; // Vector to store pairs
    
    // Iterate over the array to find pairs
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            // If sum of current pair equals s
            if(arr[i] + arr[j] == s) {
                // Create a temporary vector to store the pair
                vector<int> temp;
                // Add the smaller and larger element of the pair to temp
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                // Add temp to ans
                ans.push_back(temp);
            }
        }
    }
    
    // Sort the pairs lexicographically
    sort(ans.begin(), ans.end());
    
    // Return the vector of pairs
    return ans;
}

Problem Statement : 

You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:


Explain
Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.