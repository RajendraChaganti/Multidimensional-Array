/*
Rajendra Chaganti 
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int a[2][2], b[2][2], c[2][2];
    // Input first matrix
    cout << "Enter 4 elements of first matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    // Input second matrix
    cout << "Enter 4 elements of second matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];
    // Multiply matrices
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    // Output result
    cout << "Product of matrices:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
/*
Output :
Enter 4 elements of first matrix:
2
3
4
1
Enter 4 elements of second matrix:
2
3
4
2
Product of matrices:
16 12 
12 14 
*/
