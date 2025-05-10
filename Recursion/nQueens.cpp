#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        // Check if the current cell is reserved
        if (board[row][col] == '*') {
            return false;
        }
        // Check the column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        // Check the left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // Check the right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void placeQueen(vector<string>& board, int row, int n, int& count) {
        if (row == n) {
            count++;
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isSafe(board, row, col, n)) {
                board[row][col] = 'Q';
                placeQueen(board, row + 1, n, count);
                board[row][col] = '.';
            }
        }
    }

    int solveNQueens(vector<string>& board) {
        int n = 8; // Since the chessboard is 8x8
        int count = 0;
        placeQueen(board, 0, n, count);
        return count;
    }
};

int main() {
    vector<string> board(8);
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    Solution solution;
    cout << solution.solveNQueens(board) << endl;
    return 0;
}