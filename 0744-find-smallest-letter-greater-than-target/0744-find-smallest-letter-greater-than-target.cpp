class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         int start = 0;
        int end = letters.size()-1;
        
        if(target >= letters[end])
            return letters[0];
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(letters[mid] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            
            }
            mid = start +(end-start)/2;
        }
        return letters[start];
    }
};