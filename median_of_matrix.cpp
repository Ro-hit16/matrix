#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median_of_matrix(vector<vector<int>> matrix){
  
    vector<int> arr;

    
    for (vector<int>& row : matrix) {
        arr.insert(arr.end(), row.begin(), row.end());
    }

    
    sort(arr.begin(), arr.end());

    int n = arr.size();
     
    if (n % 2 == 0) {
        return (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    }
    
     else {
        return arr[n / 2];
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    
    cout << median_of_matrix(matrix) << endl; // Added semicolon here

    return 0;
}
