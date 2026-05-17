#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,x;
    cin >> a >> b >> c >>d;
    if (a == 0 and b == 0){
        cout <<"INF";}
    else if (a == 0 || b * c == a * d){
        cout << "NO";}
    else if (b % a == 0){
        x = -b/a;
        cout <<x;}
    else{
        cout << "NO";}
}