#include <iostream>
using namespace std;

int main() {
    int n,p,j,m,l;
    cin >> n;
    p = 540;
    l = p + n*45 + 5*(n/2) + 15 * ((n-1)/2);
    j = l/60;
    m = l%60;
    cout << j << " " << m;
    return 0;
}