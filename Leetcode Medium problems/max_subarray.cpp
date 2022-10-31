/*
Given an integer array nums, find the subarray which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=INT_MIN;
        int max_ending_here=0;
        int mini=nums[0];
        for(int i=0;i<nums.size();i++){
            mini=max(nums[i],mini);
            max_ending_here+=nums[i];
            if(max_ending_here<0){
                max_ending_here=0;
            }
            if(max_ending_here>max_so_far){
               max_so_far=max_ending_here;
            }
        }
        if(max_so_far==0){
            return mini;
        }
        return max_so_far;
    }
};