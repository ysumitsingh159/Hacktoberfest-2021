/*
Problem-Statement:
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i = 1;
        while (i<nums.size()){
            nums[i]+=nums[i-1];
            i++;
        }
        return nums;
    }
};
