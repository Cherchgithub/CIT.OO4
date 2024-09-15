#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 array
    int matrix[3][3];

    // Input 9 integers to fill the 2D array
    cout << "Enter 9 integers for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the primary diagonals
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    
    for (int i = 0; i < 3; ++i) {
        primaryDiagonalSum += matrix[i][i]; // Sum for primary diagonal (top-left to bottom-right)
        secondaryDiagonalSum += matrix[i][2 - i]; // Sum for secondary diagonal (top-right to bottom-left)
    }

    // The final result
    int totalSum = primaryDiagonalSum + secondaryDiagonalSum;

    // Output the results
    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;
    cout << "Total sum of all diagonals: " << totalSum << endl;

    return 0;
}