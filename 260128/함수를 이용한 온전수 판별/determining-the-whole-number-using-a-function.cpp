#include <iostream>

using namespace std;

bool Func(int n) {
    if(n % 2 == 0) return false;
    if(n % 10 == 5 || n == 5) return false;
    if(n % 3 == 0 && n % 9 != 0) return false;

    return true;
}

int a, b;

int main() {
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(Func(i)) cnt++;
    }

    cout << cnt;

    return 0;
}