#include <iostream>
using namespace std;

int main() {
    int n, idx;
    cin >> n;

    int arr[1000] = {1, n};
    for(int i = 2; i < 1000; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];

        if(arr[i] > 100) {
            idx = i;
            break;
        }
    }

    for(int i = 0; i <= idx; i++) cout << arr[i] << " ";

    return 0;
}