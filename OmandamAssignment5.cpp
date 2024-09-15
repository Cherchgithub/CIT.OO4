#include <iostream>
using namespace std;

// Function to print the 2D array
void printArray(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to find and print all saddle points in the 2D array
void findSaddlePoints(int arr[3][3]) {
    bool foundSaddlePoint = false;

    for (int i = 0; i < 3; ++i) {
        // Find the minimum element in the current row
        int minRow = arr[i][0];
        int minCol = 0;
        for (int j = 1; j < 3; ++j) {
            if (arr[i][j] < minRow) {
                minRow = arr[i][j];
                minCol = j;
            }
        }

        // Check if this minimum element is the largest in its column
        bool isSaddlePoint = true;
        for (int k = 0; k < 3; ++k) {
            if (arr[k][minCol] > minRow) {
                isSaddlePoint = false;
                break;
            }
        }

        // If it is a saddle point, print it
        if (isSaddlePoint) {
            cout << "Saddle Point: " << minRow << endl;
            foundSaddlePoint = true;
        }
    }

    if (!foundSaddlePoint) {
        cout << "No saddle points found." << endl;
    }
}

int main() {
    int arr[3][3];

    // Taking input from user
    cout << "Enter 9 integers for the 3x3 array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "Original 2D Array:" << endl;
    printArray(arr);

    // Find and print saddle points
    findSaddlePoints(arr);

    return 0;
}
