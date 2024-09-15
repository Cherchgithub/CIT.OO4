#include <iostream>
using namespace std;

int main(){
const int size = 10;
char arrays[10];

    //input
    cout << "Enter your characters: \n";
    for(int counter1 = 0; counter1 < 10; counter1++){
        cin >> arrays[counter1];
    }

    //Bubble sorter
    for(int counter2 = 0; counter2 < 10; counter2++){
        for(int counter3=0; counter3 < 10; counter3++){
            if(arrays[counter3] < arrays[counter3+1]){
            float temp;
            temp=arrays[counter3];
            arrays[counter3] = arrays[counter3+1];
            arrays[counter3+1] = temp;
            }
        }
    }

    //output
    cout << "Output: \n";
    for(int counter4 = 0; counter4 < 10; counter4++){
        cout << arrays[counter4] << ' ';
    }
    return 0;
}