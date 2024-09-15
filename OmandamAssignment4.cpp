#include <iostream>
#include <string>

using namespace std;

// Function to print the 2D array
void printArray(string arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to rotate the 2D array 90 degrees clockwise
void rotateArray(string arr[3][3]) {
    string temp[3][3];
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            temp[j][2-i] = arr[i][j];
        }
    }
    
    // Copy the rotated array back to the original array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = temp[i][j];
        }
    }
}

int main() {
    string arr[3][3];
    
    cout << "Enter 9 strings for the 3x3 array:" << endl;
    
    // Input 9 strings from the user
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter string for position (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }
    
    cout << "\nOriginal 2D array:" << endl;
    printArray(arr);
    
    // Rotate the array 90 degrees clockwise
    rotateArray(arr);
    
    cout << "Rotated 2D array:" << endl;
    printArray(arr);
    
    return 0;
}
