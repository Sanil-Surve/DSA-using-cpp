#include<iostream>
using namespace std;

int main() {
    float radius;
    double area;

    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;

    area = 3.14 * radius * radius;
    cout << "Area is " << area << endl;
    return 0;
}