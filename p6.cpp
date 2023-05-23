#include<iostream>
using namespace std;

int sum(int a, int b); //function declaration



int main() 
{
    int num1, num2, total = 0;
    cout << "Enter the first Number: " << endl;
    cin >> num1;

    cout << "Enter the second the number: " << endl;
    cin >> num2;

    total = sum(num1, num2); // function call

    cout << "Total of " << num1 << " and " << num2 << " is " << total << endl;

    return 0;

}

int sum(int a, int b) 
{
    int result;
    result = a + b;
    return result;
}