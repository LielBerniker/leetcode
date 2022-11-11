
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 
#include <cstdlib>
using namespace std;
class Solution {
public:

    int numRookCaptures(vector<vector<char>>& board) {
        bool hasBishop = false;
        int rockPossI = -1 ,rockPossJ=-1,capturePawns = 0;
        for (size_t i = 0; i < board.size(); i++)
        {
            for (size_t j = 0; j < board[0].size(); j++)
            {
                if( board[i][j] == 'R')
                {
                    rockPossI = i;
                    rockPossJ = j;
                    break;
                }
            }
            
        }
        for (int i = rockPossI-1; i >=0; i--)
        {
            if(board[i][rockPossJ] == 'p')
            {
                capturePawns++;
                break;
            }
            else if (board[i][rockPossJ] == 'B')
            break;
        }
        for (int i = rockPossI+1; i <board.size(); i++)
        {
            if(board[i][rockPossJ] == 'p')
                        {
                capturePawns++;
                break;
            }
            else if (board[i][rockPossJ] == 'B')
            break;
        }
        for (int i = rockPossJ-1; i >=0; i--)
        {
            if(board[rockPossI][i] == 'p')
                        {
                capturePawns++;
                break;
            }
            else if (board[rockPossI][i] == 'B')
            break;
        }
        for (int i = rockPossJ+1; i < board[0].size(); i++)
        {
            if(board[rockPossI][i] == 'p')
                        {
                capturePawns++;
                break;
            }
            else if (board[rockPossI][i] == 'B')
            break;
        }
        return capturePawns;
        
    }
};