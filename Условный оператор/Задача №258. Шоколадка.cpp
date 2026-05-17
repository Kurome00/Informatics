#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    if ((k % n ==0 || k% m == 0) && n * m -k >0)
    {

        cout << "YES";
    }
    else {cout << "NO";}


}