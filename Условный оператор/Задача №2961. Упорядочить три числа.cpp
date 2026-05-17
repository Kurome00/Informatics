#include <iostream>
using namespace std;

int main() {
    int a,b,c,cr,mi;
    cin >> a >> b >> c;
    if ((a<=b && b<=c)||(c<=b && b<=a))
    {
        cr = b;
    }
    else if ((b<=a && a<=c)||(c<=a && a<=b))
    {
        cr =a;
    }
    else {cr = c;}
    if ((a<=b && b<=c)||(a<=c && c<=b))
    {
        mi = a;
    }
    else if ((b<=a && a<=c)||(b<=c && c<=a))
    {
        mi =b;
    }
    else {mi = c;}
    cout << mi << " " << cr << " " << a+b+c-mi-cr;
}