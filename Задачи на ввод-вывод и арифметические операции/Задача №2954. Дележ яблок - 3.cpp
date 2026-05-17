#include <iostream>
using namespace std;

int main() {
    int n,p,r,t;
    cin >> n >> p;
    r=n-(p%n);
    t = r%n;
    cout << t;
    return 0;
}

