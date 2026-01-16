#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = 100;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] - arr[i] < min) min = arr[j] - arr[i];
        }
    }
    cout << min;

    return 0;
}