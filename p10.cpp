#include<iostream>
using namespace std;
int Fact( int ); // Function declaration
int main()
{
    int num;

    cout << "Enter the number: " << endl;
    cin >> num;

    cout << "Factorial of " << num << " = " << Fact(num) << endl; // function call
    return 0;
}

// function defination 
int Fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return (n * Fact(n-1));
}