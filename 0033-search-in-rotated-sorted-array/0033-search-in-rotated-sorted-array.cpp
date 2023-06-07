class Solution {
public:
    int search(vector<int>& nums, int target) {
          int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                return mid;
            }
            //for left side to be sorted
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && nums[mid] > target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1; 
                }
            }
            else{  //for right side to be sorted
                if(target > nums[mid] && target <= nums[end]){
                    start = mid + 1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};