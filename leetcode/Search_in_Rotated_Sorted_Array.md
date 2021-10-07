## Search in Rotated Sorted Array (Leetcode)<br>
Difficulty : Medium <br>
<b>Link</b> : https://leetcode.com/problems/search-in-rotated-sorted-array/
```c
class Solution {
public:
    int binarysearch( vector<int>&A,int start,int end,int key)
    {
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(A[mid]==key)
            {
                return mid;
            }
            else if(A[mid]<key)
            {
                start=mid+1;
            }
            else 
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        int mid,ans=-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]>=nums[prev] && nums[mid]>=nums[next])
            {
                ans=mid;
                break;
            }
            else if(nums[mid]>=nums[start])
            {
                start=mid+1;
            }
            else 
            {
                end=mid-1;
            }
        }
        int final_ans;
        if( target>=nums[0] && target<=nums[ans])
        {
            final_ans=binarysearch(nums,0,ans,target);
        }
        else 
        {
            final_ans=binarysearch(nums,ans+1,n-1,target);
        }
        return final_ans;
    }
};
```
