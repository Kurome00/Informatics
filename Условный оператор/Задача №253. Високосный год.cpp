#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 100 == 0) {
        if (n %400 == 0)
        {
            cout << "YES";
        }
        else {cout << "NO";}

    }
    if (n %100 !=0)
    {
        if (n %4 == 0)
        {
            cout << "YES";
        }
        else {cout << "NO";}
    }
}

