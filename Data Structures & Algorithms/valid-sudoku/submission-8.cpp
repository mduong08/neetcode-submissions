class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool cols[9][10] = {false};
        bool rows[9][10] = {false};
        bool boxs[9][10] = {false};
        for(int c = 0; c < 9; c++)
        {
            for(int r = 0; r < 9; r++)
            {
                if(board[c][r] == '.') continue;
                int value = board[c][r] - '0';
                int boxIndex = (r/3)*3 + (c/3);
                if(cols[c][value] || rows[r][value] || boxs[boxIndex][value]) return false;
                cols[c][value] = true;
                rows[r][value] = true;
                boxs[boxIndex][value] = true;
            }
        }
        return true;
    }
};
