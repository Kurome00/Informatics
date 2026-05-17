#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if (x - y >0)
    { if (x - z >=0)
    { cout << x;
    }
    else {cout <<z; }
    }
    if (x - y <0)
    { if (y - z >=0)
    { cout << y;
    }
    else {cout <<z; }
    }
    if (x - y ==0)
    { if (y - z >=0)
    { cout << y;
    }
    else {cout <<z; }
    }
}