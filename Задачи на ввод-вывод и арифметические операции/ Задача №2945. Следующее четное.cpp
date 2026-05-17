#include <iostream>
using namespace std;

int main() {
    int n,p;
    cin >> n;
    p = n%2;
    n+= 2 -p;
    cout << n;
}