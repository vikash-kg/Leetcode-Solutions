class Solution {
public:
int firstocc(vector<int> &nums,int target){
     int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int ans= -1;
        while(start <= end){
            if(nums[mid] == target){
                ans = mid;
                end = mid-1; // first occ nikalna h issiliye
            }
            else
            if(nums[mid]< target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start +(end-start)/2;
            
        }
        return ans;
}
int lastocc(vector<int> &nums,int target){
     int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int ans= -1;
        while(start <= end){
            if(nums[mid] == target){
                ans = mid;
                start = mid+1; 
            }
            else
            if(nums[mid]< target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
            
        }
        return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>ans;
       ans.push_back(firstocc(nums,target));
       ans.push_back(lastocc(nums,target));
       return ans;
    }
};