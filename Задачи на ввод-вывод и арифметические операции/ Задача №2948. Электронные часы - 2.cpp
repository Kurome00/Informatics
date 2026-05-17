#include <iostream>
using namespace std;

int main() {
    int n,j,p=0;
    cin >> n;
    p = n/3600;
    j = n /60;
    while (j>=60)
    {
        j-=60;
    }
    while (p>=24)
    {
        p-=24;
    }
    while (n>=60)
    {
        n-=60;
    }

    cout <<p<< ":";


    if (j < 10) cout << "0";
    cout <<j << ":";

    if (n < 10) cout << "0";
    cout << n;
    return 0;
}