#include <iostream>
using namespace std;

int main()
{
    cout << "Nama: Balqies L Ratu Rayya" << endl;
    cout << "NIM : 2311102313" << endl;
     char op;
     float num1, num2;

     // It allows user to enter operator i.e. +, -, *, /
     cout <<"Masukkan operator (+, -, *, /): ";
     cin >> op;

     cout << endl;
     // It allow user to enter the operands
     cout <<"Masukkan operand : ";
     cin >> num1 >> num2;

     // Switch statement begins
     switch (op)
     {
          // If user enter +
          case '+':
          cout << num1 + num2;
          break;
          // If user enter -
          case '-':
          cout << num1 - num2;
          break;
          // If user enter *
          case '*':
          cout << num1 * num2;
          break;
          // If user enter /
          case '/':
          cout << num1 / num2;
          break;
          // If the operator is other than +, -, * or /,
          // error message will display
          default:
          cout << "Error! operator is not correct";
          } // switch statement ends
     return 0;
}
