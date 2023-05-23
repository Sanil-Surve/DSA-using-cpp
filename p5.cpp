#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int decimal_num = 0, remainder,  binary_num, i = 0;

    cout << "Enter the binary number: " << endl;
    cin >> binary_num ;

    while(binary_num != 0) {
        remainder = binary_num%10;
        decimal_num += remainder*pow(2, i);
        binary_num = binary_num/10;
        i++;
    }

    cout << "The Decimal equivalent is = " << decimal_num << endl;
    return 0;
}