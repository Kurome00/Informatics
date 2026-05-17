#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h, a, b,c,p,f,m;
    cin >> h;
    a = h % 100;
    m = h %10; //222@
    f = (a - m)/10; // 22@2
    b = h /100;
    c = h / 1000; //@222
    p = b - c*10; //2@22
    cout << abs(m - c) + abs(f - p) +1;
}