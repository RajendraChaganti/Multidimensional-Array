/*
Rajendra Chaganti 
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int matrix[100][100]; 
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nMatrix is:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
/*
Output :
Enter number of rows: 3
Enter number of columns: 4
Enter elements of the matrix:
Element at [0][0]: 3
Element at [0][1]: 4
Element at [0][2]: 5
Element at [0][3]: 3
Element at [1][0]: 4
Element at [1][1]: 3
Element at [1][2]: 4
Element at [1][3]: 3
Element at [2][0]: 4
Element at [2][1]: 3
Element at [2][2]: 4
Element at [2][3]: 3

Matrix is:
3	4	5	3	
4	3	4	3	
4	3	4	3	
*/
