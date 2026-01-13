#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] == 2) cnt++;

        if(cnt == 3) {
            cout << i + 1;
            
            return 0;
        }
    }

    return 0;
}