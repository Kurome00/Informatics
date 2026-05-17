#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c,d,f,p,r,n;
    cin >> a >> b >> c >> d;
    p = a*100 + b;
    r = c*100 +d;
    n = r-p;
    f = n/100;
    while (n>=100)
    {n-=100;}
    cout << f << " " << n;
    return 0;
}