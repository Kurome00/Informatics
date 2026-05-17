#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x >= y + z || y >= x + z || z >= x + y)
    {
        cout << "impossible";
    }
    else if (x*x == y*y + z*z || y*y == x*x + z*z || z*z == x*x + y*y)
    {
        cout << "right";
    }
    else if (x*x > y*y + z*z || y*y > x*x + z*z || z*z > x*x + y*y)
    {
        cout << "obtuse";
    }
    else
    {
        cout << "acute";
    }

    return 0;
}