#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2 == 0) {
                cout << arr[j];
            } else {
                cout << arr[n - j - 1];
            }
        }
        cout << endl;
    }
    return 0;
}