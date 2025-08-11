/*
Rajendra Chaganti 
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int a[2][2], b[2][2], sum[2][2];
    cout << "Enter 4 elements of first matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    cout << "Enter 4 elements of second matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];
    // Add matrices
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Sum of matrices:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << sum[i][j] << " ";
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
5
Enter 4 elements of second matrix:
5
3
2
3
Sum of matrices:
7 6 
6 8 
*/
