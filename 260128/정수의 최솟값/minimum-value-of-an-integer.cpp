#include <iostream>

using namespace std;

int Func(int a, int b, int c) {
    if(a <= b && a <= c) return a;
    else if(b <= a && b <= c) return b;
    else return c;
}

int a, b, c;

int main() {
    cin >> a >> b >> c;

    cout << Func(a, b, c);
    
    return 0;
}