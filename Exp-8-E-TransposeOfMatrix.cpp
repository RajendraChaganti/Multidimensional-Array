#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int matrix[10][10], transpose[10][10];  // assuming max size 10x10
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    // Transpose logic
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
    cout << "Transposed matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}
/*
Output :
Enter number of rows and columns: 3
2
Enter matrix elements:
2
3
4
5
3
2
Transposed matrix:
2 4 3 
3 5 2 
*/
