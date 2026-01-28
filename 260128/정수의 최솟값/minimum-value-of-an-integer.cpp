#include <iostream>

using namespace std;

int Func(int a, int b, int c) {
    int min = a;

    if(min > b) min = b;
    if(min > c) min = c;

    return min;
}

int a, b, c;

int main() {
    cin >> a >> b >> c;

    cout << Func(a, b, c);
    
    return 0;
}