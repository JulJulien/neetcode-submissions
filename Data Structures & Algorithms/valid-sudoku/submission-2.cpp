class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //horizontal check
        for(int i = 0; i < 9; i++)
        {
            unordered_map<int, int> count;
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.')
                    continue;
                if(count.count(board[i][j]))
                    return false;
                count.insert({board[i][j], 1});
            }
        }
        //vertical check
        for(int i = 0; i < 9; i++)
        {
            unordered_map<int, int> count;
            for(int j = 0; j < 9; j ++)
            {
                if(board[j][i] == '.')
                    continue;
                if(count.count(board[j][i]))
                    return false;
                count.insert({board[j][i], 1});
            }
        }
        //3x3 box check
        for(int i = 0; i < 9; i++)
        {
            unordered_map<int, int> count;
            for(int j = 0; j < 3; j++)
            {
                for(int k = 0; k < 3; k++)
                {
                    int row = (i / 3) * 3 + j;
                    int col = (i % 3) * 3 + k;
                    if(board[row][col] == '.')
                        continue;
                    if(count.count(board[row][col]))
                        return false;
                    count.insert({board[row][col], 1});
                }
            }
        }
        return true;
    }
};
