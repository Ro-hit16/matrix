#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool binary_search(vector<int>& row, int target) {
    int left = 0, right = row.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (row[mid] == target) {
            return true;
        } else if (row[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

bool search_element(vector<vector<int>>&matrix,int target){
    int rows = matrix.size();
    if(rows == 0)
    return false;
  
  int cols = matrix[0].size();
  for(int row = 0;row < rows;row++){
    if(binary_search(matrix[row] ,  target)){
        return true;
    }
  }
  return false;
}
int main(){
 vector<vector<int>>matrix = {{1,3,5},{7,9,11},{13,15,17}};
 int target = 9;
 if(search_element(matrix,  target)){
    cout<<"element found in the matrix"<<endl;
 }
 else{
    cout<<"element not found in the matrix"<<endl;
 }
return 0;
}