#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int add_res = 0, sub_res = 0, mul_res = 0, idiv_res = 0, modiv_res = 0;

    float fdiv_res = 0.0;

    cout << "Enter the first Number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    add_res = num1 + num2;

    sub_res = num1 - num2;

    mul_res = num1 * num2;

    idiv_res = num1 / num2;

    modiv_res = num1 % num2;

    fdiv_res = (float)num1 / num2;

    cout << "Addition of " << num1 << " and " << num2 << " is " << add_res << endl;
    
    cout << "Subtraction of " << num1 << " and " << num2 << " is " << sub_res << endl;

    cout << "Multiplication of " << num1 << " and " << num2 << " is " << mul_res << endl;

    cout << "Integer Division of " << num1 << " and " << num2 << " is " << idiv_res << endl;

    cout << "modulo of " << num1 << " and " << num2 << " is " << modiv_res << endl;

    cout << "float of " << num1 << " and " << num2 << " is " << fdiv_res << endl;
    
    return 0;
}