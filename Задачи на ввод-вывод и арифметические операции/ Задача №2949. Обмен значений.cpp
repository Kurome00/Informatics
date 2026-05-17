#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int v = a;
    a-=a;
    a+=b;
    b-=b;
    b+=v;
    cout << a << " " << b;
    return 0;
}