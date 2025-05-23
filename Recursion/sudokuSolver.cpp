#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int row, int col, int num) {
    // Row and column check
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num || grid[x][col] == num)
            return false;
    }

    // 3x3 subgrid check
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;

    return true;
}

bool helper(int grid[9][9], int row, int col) {
    if (row == 9)
        return true;

    if (col == 9)
        return helper(grid, row + 1, 0);

    if (grid[row][col] != 0)
        return helper(grid, row, col + 1);

    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (helper(grid, row, col + 1))
                return true;
            grid[row][col] = 0; // backtrack
        }
    }

    return false;
}

void solveSudoku(int grid[9][9]) {
    helper(grid, 0, 0);
}

void printGrid(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    int grid[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Before Solving:\n";
    printGrid(grid);

    solveSudoku(grid);

    cout << "\nAfter Solving:\n";
    printGrid(grid);

    return 0;
}
