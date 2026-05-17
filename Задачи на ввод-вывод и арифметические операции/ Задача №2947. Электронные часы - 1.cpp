#include <iostream>
using namespace std;

int main() {
    int n,i=0;
    cin >> n;
    while (n>=60){
        n -=60;
        i++;
    }
    while (i>=24)

    { i -=24;
    }

    cout<< i << " " << n;
    return 0;
}