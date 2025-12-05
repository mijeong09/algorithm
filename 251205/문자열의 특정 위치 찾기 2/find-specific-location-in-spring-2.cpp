#include <iostream>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char n;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < 5; i++) {
        if (arr[i][2] == n || arr[i][3] == n) {
            cout << arr[i] << "\n";
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}