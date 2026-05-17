#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d=b*b-4*a*c;
    if (d>0) {
        double x1 = (-b-sqrt(d)) / (2*a);
        double x2 = (-b+sqrt(d)) / (2*a);
        cout << x1 << " " << x2;
    } else if (d == 0) {
        double x = -b / (2 * a);
        if (x==0){cout << 0;}
        else {cout << x;}
    }

    return 0;
}