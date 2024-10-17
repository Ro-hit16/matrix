#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiraltraversal(vector<vector<int>>& matrix) {
    vector<int> ans;
    int rows = matrix.size();
    if (rows == 0)
        return ans;

    int cols = matrix[0].size();
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right)  {
        // Move right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Move down
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }                                             
        right--;                                                                                                                                     

        // Move left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Move up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiraltraversal(matrix);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
