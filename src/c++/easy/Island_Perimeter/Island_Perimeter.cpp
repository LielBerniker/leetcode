
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 
#include <cstdlib>
using namespace std;

class Solution {
public:
    int countSides(vector<vector<int>>& grid,bool up,bool down,bool left,bool right,int i , int j) {
      int sum = 0;
      if(!up)
      sum+= ((grid[i-1][j]==0) ? 1:0);
      else
      sum+= 1;
      if(!down)
      sum+= ((grid[i+1][j]==0) ? 1:0);
      else
      sum+= 1;
      if(!left)
      sum+= ((grid[i][j-1]==0) ? 1:0);
      else
      sum+= 1;
      if(!right)
      sum+= ((grid[i][j+1]==0) ? 1:0);
      else
      sum+= 1;
        
        return sum;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
      int totalSize = 0;
        for (int i = 0; i < grid.size(); i++)
        {
          for (int j = 0; j <grid[0].size(); j++)
          {
            int sideToAdd = 0;
            bool up = false,down=false,left=false,right=false;
            if(grid[i][j] == 1)
            {
            if(i-1<0)
            up=true;
            if(i+1>=grid.size())
            down=true;
            if(j-1<0)
            left=true;
            if(j+1>= grid[0].size())
            right=true;
             sideToAdd = countSides(grid,up,down,left,right,i,j);
             totalSize+= sideToAdd;
            }
          }
          
        }
        return totalSize;
    }
};
int main()
{
  uint32_t x = 43261596;
  x =x *-1;
    return 0;
}