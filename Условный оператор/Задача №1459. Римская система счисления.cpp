#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    if (X == 100) {
        cout << "C";
    }
    else
    {if (X >= 90)
    {
        cout << "XC"; X -= 90;
    }
    else if (X >= 80)
    {
        cout << "LXXX"; X -= 80;
    }
    else if (X >= 70)
    {
        cout << "LXX"; X -= 70;
    }
    else if (X >= 60)
    {
        cout << "LX"; X -= 60;
    }
    else if (X >= 50)
    {
        cout << "L"; X -= 50;
    }
    else if (X >= 40)
    {
        cout << "XL"; X -= 40;
    }
    else if (X >= 30)
    {
        cout << "XXX"; X -= 30;
    }
    else if (X >= 20)
    {
        cout << "XX"; X -= 20;
    }
    else if (X >= 10)
    {
        cout << "X"; X -= 10;
    }
        if (X == 9) cout << "IX";
        else if (X == 8) cout << "VIII";
        else if (X == 7) cout << "VII";
        else if (X == 6) cout << "VI";
        else if (X == 5) cout << "V";
        else if (X == 4) cout << "IV";
        else if (X == 3) cout << "III";
        else if (X == 2) cout << "II";
        else if (X == 1) cout << "I";
    }

    return 0;
}