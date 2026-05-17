#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m,p,r,d;
    cin >> n >> m;
    p = n + m;
    r = n*m;
    d = r / ((p - ((n%m)+(m%n))) / ((n/m) + (m/n)));
    cout << d << endl;
    return 0;
}