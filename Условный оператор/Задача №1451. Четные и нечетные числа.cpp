#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c,i=0;
    cin >> a >> b>>c;
    if (abs(a) %2 == 0)
    {
        i++;
    }
    else {i--;}
    if (abs(b)%2 == 0)
    {
        i++;
    }
    else {i--;}
    if (abs(c)%2 == 0)
    {
        i++;
    }
    else {i--;}
    if (abs(i) == 1)
    {
        cout << "YES";
    }
    else {cout << "NO";}
}
