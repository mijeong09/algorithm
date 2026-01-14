#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = n - 1; i > 0; i--) {
        for(int j = i - 1; j >= 0; j--) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << arr[0] << " " << arr[1];

    return 0;
}