#include <iostream>

using namespace std;

bool IsPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

bool JudgeNumber(int n) {
    if(((n % 10) + (n / 10 % 10)) % 2 != 0) return false;

    return true;
}

int a, b;

int main() {
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(IsPrime(i) && JudgeNumber(i)) cnt++;
    }

    cout << cnt;

    return 0;
}