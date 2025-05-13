#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;

    cout << "Enter amount: ";
    cin >> p;

    cout << "Enter rate of interest: ";
    cin >> r;

    cout << "Enter time: ";
    cin >> t;

    si = (p * r * t) / 100;
    cout << "Simple Interest = " << si << endl;
}
// OUTPUT
// Enter amount: 23
// Enter rate of interest: 3
// Enter time: 12
// Simple Interest = 8.28
