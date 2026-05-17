#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m,p,f;
    cin >> n >> m;
    p = m%n;
    f = n %m;
    cout << f*p+1;
}