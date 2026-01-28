#include <iostream>

using namespace std;

int Func(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum / 10;
}

int N;

int main() {
    cin >> N;

    cout << Func(N);

    return 0;
}