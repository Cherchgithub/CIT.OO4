#include <iostream>
using namespace std;

int main() {
    char array[9];
    bool isPalindrome = true;
    cout << "Enter your characters: \n";
    for(int counter = 0; counter < 9; counter++){
        cin >> array[counter];
    }
    for(int counter = 0,counter2 = 8; counter < 4; counter++,counter2--){
        if(array[counter]!=array[counter2]){
            isPalindrome = false;
        }  
    }
    if(isPalindrome==true){
        cout << "Is Palindrome";
    }else {
        cout << "Is not Palindrome";
    }
     cout << "\nYour input: ";
    for (int counter = 0; counter < 9; counter++){
        cout << array[counter] << ' ';
    }
return 0;
}