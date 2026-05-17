#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if (x+z>y && x+y >z && y+z >x)
    {
        cout << "YES";
    }
    else {cout << "NO";}
}