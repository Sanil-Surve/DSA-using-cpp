// find whether the given number is and armstrong number or not 

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int num, sum = 0, r, n;

    cout << "Enter the number: " << endl;
    cin >> num;

    n = num;

    while ( n > 0)
    {
        r = n % 10;
        sum += pow(r, 3);
        n = n/10;
    }

    if(sum == num) 
    {
        cout << num << " Armstrong number is "<< endl;
    }
    else 
    {
        cout << num <<  " is not Armstrong number" << endl;
    }

    return 0;
}