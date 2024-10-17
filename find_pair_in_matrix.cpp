#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

pair<int, int> findpair(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    if (n == 0) {
        return {-1, -1};
    }

    pair<int, int> result = {-1, -1}; 

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == target) {
                result = {i, j};
                return result; 
            }
        }
    }

    return result; 
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;
    pair<int, int> foundPair = findpair(matrix, target);

    if (foundPair.first != -1 && foundPair.second != -1) {
        cout << "Pair (" << target << ", " << matrix[foundPair.first][foundPair.second] << ") found at position: (" << foundPair.first << ", " << foundPair.second << ")" << endl;
    } else {
        cout << "Pair (" << target << ", " << "??" << ") not found" << endl;
    }
    
    return 0;
}
