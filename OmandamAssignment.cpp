#include <iostream>
using namespace std;

int main(){
    char array[10];

    cout << "Input 10 character: ";
    for (int counter = 0; counter < 10; counter++){
        cin >> array[counter];
    }
    cout << '\n' << "Output: ";

    for (int counter = 9; counter > -1; counter--){
        cout << array[counter] << ' ';
    }

    return 0;
}