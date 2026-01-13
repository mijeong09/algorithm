#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0, };
    int a, b;
    cin >> a >> b;

    while(a > 1) {
        arr[a % b]++;
        a /= b;
    }

    int sum = 0;
    for(int i = 0; i <= 9; i++) {
        sum += arr[i] * arr[i];
    }

    cout << sum;

    return 0;
}