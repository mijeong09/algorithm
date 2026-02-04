#include <iostream>

using namespace std;

int n;
int arr[100];

int Func(int n, int max) {
    if(n < 0) return max;

    if(arr[n] > max) max = arr[n];

    return Func(n - 1, max);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    cout << Func(n - 1, max);
    
    return 0;
}