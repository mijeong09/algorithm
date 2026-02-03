#include <iostream>

using namespace std;

int arr[101];

int Func(int n, int max) {
    if(n == 1) return max;

    if(arr[n] > max) max = arr[n];

    return Func(n - 1, max);
}

int main() {
    int n, max;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    max = arr[n];

    cout << Func(n, max);

    return 0;
}