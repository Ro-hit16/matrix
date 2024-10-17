#include <iostream>
#include <vector>
using namespace std;

int rowWithMaxOnes(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Start from the top-right corner
    int row = 0;
    int col = cols - 1;
    int maxOnesRowIndex = -1;

    // Repeat until we reach the bottom-left corner
    while (row < rows && col >= 0) {
        if (matrix[row][col] == 1) {
            // Move to the left to explore more 1's in the same row
            maxOnesRowIndex = row;
            col--;
        } else {
            // Move down to explore more 1's in the lower rows
            row++;
        }
    }

    return maxOnesRowIndex;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 1}
    };

    int rowIndex = rowWithMaxOnes(matrix);
    if (rowIndex != -1) {
        cout << "Row with maximum number of 1's: " << rowIndex << endl;
    } else {
        cout << "No row with 1's found." << endl;
    }

    return 0;
}
