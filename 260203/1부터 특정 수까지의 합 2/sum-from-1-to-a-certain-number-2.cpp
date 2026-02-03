#include <iostream>

using namespace std;

int SumNum(int n) {
    if(n == 1) return 1;

    return SumNum(n - 1) + n;
}


int main() {
    int n;
    cin >> n;

    cout << SumNum(n);

    return 0;
}