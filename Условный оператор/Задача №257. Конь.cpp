#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y,x_1,y_1;
    cin >> x >> y >> x_1 >> y_1;
    if ((abs(x-x_1) ==2) && (abs(y-y_1) ==1) || ((abs(x-x_1) ==1) && (abs(y-y_1) ==2)) )
    {

        cout << "YES";
    }
    else {cout << "NO";}


}