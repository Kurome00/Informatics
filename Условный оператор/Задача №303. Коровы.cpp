#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n ==1 || ((n% 20 == 1||n%20 == 11)&& n>20))
    {cout << n << " " << "korova";}
    else if ((n >1&& n<5) || (((n% 20 >1 && n%20 <5)||(n% 20 >11 && n%20 <15))&& n>20))
    {cout << n << " " << "korovy";}
    else {cout << n << " " << "korov";}
    return 0; //1 korova 2 korovy 3,4 korovy 5,6,7,8,9,10,11,12,13,14,15-20, 21 roro korov
}