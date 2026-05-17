#include <iostream>
using namespace std;

int main() {
    int h, a, b;
    cin >> h >> a >> b;
    int days = (h - b - 1) / (a - b) + 1;
    cout << days;
    return 0;
}