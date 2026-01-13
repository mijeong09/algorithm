#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0, };

    while(true) {
        int n;
        cin >> n;

        if(n == 0) break;

        n /= 10;
        arr[n]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << i << " - " << arr[i] << endl;
    }
    
    return 0;
}