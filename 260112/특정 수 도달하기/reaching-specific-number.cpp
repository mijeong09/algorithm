#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0, cnt = 0;;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];

        if(arr[i] >= 250) {
            break;
        }

        sum += arr[i];
        cnt++;
    }

    cout << sum << " ";
    cout << (double)sum / cnt;

    return 0;
}