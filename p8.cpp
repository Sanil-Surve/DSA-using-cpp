#include <iostream>
using namespace std;

int x = 10;
void print();

int main()
{
    cout << "The value of x in the main() is " << x << endl;
    int x = 2;

    cout << "The value of local variable x in the main() is " << x << endl;

    print();
    return 0;
}

void print()
{
    cout << "The value of x in the print() is " << x << endl;
}