#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    int n = 109;
    int s = v * t;
    int p = s % n;
    if (p < 0) {
        p += n;
    }

    cout << p;
    return 0;
}