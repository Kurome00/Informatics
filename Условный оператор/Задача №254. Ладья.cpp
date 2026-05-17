#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y,x_1,y_1;
    cin >> x >> y >> x_1 >> y_1;
    if (x-x_1 !=0)
    {
        if (y-y_1 == 0)
        {
            cout << "YES";
        }
        else {cout << "NO";}
    }
    else {cout << "YES";}

}