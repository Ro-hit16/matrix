#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // cout<<"size is"<< n<<endl; 


    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
            
        }
    }


    // Reverse each row to complete the rotation
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3,1},
        {4, 5, 6,1},
        {7, 8, 9,1}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    rotateMatrix(matrix);

    cout << "\nRotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
