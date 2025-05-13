#include <iostream>
using namespace std;

int main() {

    float r, area;
    const float PI = 3.14;
   
    cout << "Enter the radius of the circle: ";
    cin >> r ;

    area = PI * r * r;
    cout << "Area of the circle = " << area << endl;
}
// OUTPUT
// Enter the radius of the circle: 46
// Area of the circle = 6647.63
