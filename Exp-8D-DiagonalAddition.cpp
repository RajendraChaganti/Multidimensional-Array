/*
Rajendra Chaganti 
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int a[2][2], sum = 0;
    cout << "Enter 4 elements of the 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    // Add main diagonal elements
    for (int i = 0; i < 2; i++)
        sum += a[i][i];
    cout << "Sum of main diagonal elements: " << sum << endl;
    return 0;
}
/*
Output :
Enter 4 elements of the 2x2 matrix:
3
4
2
4
Sum of main diagonal elements: 7
*/
 
