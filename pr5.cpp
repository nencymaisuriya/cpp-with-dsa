#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    float r, per;

    cout << "Enter the radius of circle: ";
    cin >> r;

    per = 2 * PI * r;
    cout << "Perimeter of the circle = " << per << endl;

}
// OUTPUT
// Enter the radius of circle:  45
// Perimeter of the circle = 282.744
