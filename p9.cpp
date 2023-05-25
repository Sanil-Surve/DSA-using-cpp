// fibonacci series using recursive function
#include<iostream>
using namespace std;

int Fibonacci(int);

int main()
{
    int n;
    cout << "Enter the number of terms in the series: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Fibonacci " << i << " = " << Fibonacci(i) << endl;
    }
    return 0;
}

int Fibonacci(int num)
{
    if (num <= 2)
    {
        return 1;
    }
    return (Fibonacci(num - 1) + Fibonacci(num - 2));
}