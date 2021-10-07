/*Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.*/


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid[0].size(),n=grid.size(), ans=0; // defining variables
        for (int i=0;i<n;i++){
              for (int j=0;j<m;j++){
                  if (grid[i][j]<0) ans++;         //if the number in grid is -ve we will increment ans variable
              }
        }
        return ans;             //returning ans 
    }
};
