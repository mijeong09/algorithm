#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while(1) {
        if(a % 2 != 0) {
            a *= 2;
        } else a *= 3;

        if(a > b) break;

        cout << a << " ";
    }

    return 0;
}