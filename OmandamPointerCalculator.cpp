#include <iostream>
using namespace std;

int main(){
    int input1, input2;
    int *ptr1 = &input1, *ptr2 = &input2;
    char op;


    cout << "Enter your input 1: ";
    cin >> *ptr1;

    cout << "Enter your input 2: ";
    cin >> *ptr2;
    

    cout << "choose between +, -, *, /: ";
    cin >> op;

    switch(op){
    case '+':
      cout << *ptr1 << " + " << *ptr2 << " = " << *ptr1 + *ptr2;
      break;

    case '-':
      cout << *ptr1 << " - " << *ptr2 << " = " << *ptr1 - *ptr2;
      break;

    case '*':
      cout << *ptr1 << " * " << *ptr2 << " = " << *ptr1 * *ptr2;
      break;

    case '/':
      cout << *ptr1 << " / " << *ptr2 << " = " ;
    if(*ptr2==0){
      cout << "error\n"; 
    } else{
      cout << *ptr1 / *ptr2;
    }
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
    }


return 0;    
}