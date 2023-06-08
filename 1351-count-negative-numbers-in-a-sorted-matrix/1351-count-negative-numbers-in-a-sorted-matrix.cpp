class Solution {
public:
     int binsearch(vector<vector<int>>& grid,int row, int start, int end){
        if(start > end)
            return 0;
         
        int mid = end - (end-start)/2;
         
        if(grid[row][mid]<0)
            return (end-mid+1) + binsearch(grid,row,start,mid-1);
         
        return binsearch(grid,row,mid+1,end);
    }
    int countNegatives(vector<vector<int>>& grid) {
         int count=0;
        
        for(int i=0; i<grid.size(); i++){
            count+=binsearch(grid,i,0,grid[i].size()-1); // i->row no., 0->1st column ka index
        }
        return count;
    }
};