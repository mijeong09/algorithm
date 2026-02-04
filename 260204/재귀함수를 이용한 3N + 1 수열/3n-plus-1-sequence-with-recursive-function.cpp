#include <iostream>

using namespace std;

int Func(int n) {
    if(n == 1) return 0;

    if(n % 2 == 0) n /= 2;
    else n = n * 3 + 1;

    return Func(n) + 1;
}


int main() {
    int n;

    cin >> n;

    cout << Func(n);

    return 0;
}