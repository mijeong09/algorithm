#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;

    cin >> n;

    while(n >= 2) {
        n /= 2;
        cnt++;

        if(n == 2) break;

    }

    cout << cnt;
    
    return 0;
}