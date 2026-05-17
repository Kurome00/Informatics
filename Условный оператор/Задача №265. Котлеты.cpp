#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    if (n <= k)
    {
        cout << 2 * m;
    }
    else
    {
        int t = (2 * n + k - 1) / k;
        cout << t * m;
    }

    return 0;
}