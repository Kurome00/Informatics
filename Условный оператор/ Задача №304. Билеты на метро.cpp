#include <iostream>
using namespace std;

int main() {
    int n,x,r=0,f=0,p,l;
    cin >> n;
    int t = n;
    if (n>=35)
    {
        x = (n-35);
        if (x>=0){f=1;}
        f += x/60;
    }
    n -=(f*60);
    p = n/10;
    if (n >= 9)
    {
        int i = n-9;
        if (i>=0){r=1;}
        r += i/10;
    }
    l = t - 60*f - r*10;
    if (l<=0){l=0;}


    cout << l << " " << r << " " << f;

}