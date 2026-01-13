#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0, };

    for(int i = 0; i < 100; i++) {
        int n;
        cin >> n;

        if(n == 0) break;
        arr[n / 10]++;
    }

    for(int i = 10; i > 0; i--) {
        cout << i * 10 << " - " << arr[i] << '\n';
    }

    return 0;
}