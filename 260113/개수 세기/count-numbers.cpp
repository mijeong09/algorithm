#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] == m) cnt++;
    }

    cout << cnt;
    
    return 0;
}