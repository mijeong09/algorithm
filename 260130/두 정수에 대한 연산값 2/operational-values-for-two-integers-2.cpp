#include <iostream>

using namespace std;

void Modify(int &a, int &b) {
    if(a > b) {
        a *= 2;
        b += 10;
    }
    else {
        b *= 2;
        a += 10;
    }
}

int a, b;

int main() {
    cin >> a >> b;

    Modify(a, b);

    cout << a << " " << b;

    return 0;
}