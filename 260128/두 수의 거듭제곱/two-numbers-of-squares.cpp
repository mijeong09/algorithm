#include <iostream>

using namespace std;

int Pow(int a, int b) {
    int res = 1;
    for(int i = 0; i < b; i++) {
        res *= a;
    }

    return res;
}

int a, b;

int main() {
    cin >> a >> b;

    cout << Pow(a, b);

    return 0;
}