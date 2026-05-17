#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if (x!=y && y!=z && x != z)
    {
        cout << "0";
    }
    if ((x!=y && y==z )||(x==y && y!=z ) || (x!=z && x==y )|| (x!=y && x==z )|| (x!=z && z==y ) || (x==z && y!=z ))
    { cout << "2";
    }

    if (x==z && z==y) {cout << "3";}
}