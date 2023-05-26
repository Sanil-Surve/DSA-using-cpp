// find area of the circle using pointers

#include <iostream>
using namespace std;

int main()
{
    double radius, area = 0.0;
    double *pradius, *parea;
    pradius = &radius;
    parea = &area;
    cout << "Enter the radius of the circle: " << endl;
    cin >> *pradius;

    *parea = 3.14 * (*pradius) * (*pradius);

    cout << "The area of the circle with radius " << *pradius << *parea << endl;

    return 0;
}