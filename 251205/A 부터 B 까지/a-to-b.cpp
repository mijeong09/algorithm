#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int n;

    while(1) {
        if(a % 2 != 0) {
            n = a * 2;
        } else {
            n = a * 3;
        }

        if(n > b) break;

        cout << n << " ";
    }

    return 0;
}