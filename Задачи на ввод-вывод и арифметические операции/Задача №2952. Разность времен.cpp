#include <iostream>
using namespace std;

int main() {
    int a,b,c,l,r,t,p;
    cin >> a >> b >> c >> l >> r >> t;
    p = l * 3600 + r *60 + t - a*3600 -b*60 - c;
    cout << p;
    return 0;
}