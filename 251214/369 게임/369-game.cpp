#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1, t = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {

        if(i % 3 == 0) cout << 0 << " ";
        else if(cnt == 3) {
            cout << 0 << " ";
        } else if(t >= 3 && t % 3 == 0) {
            cout << 0 << " ";
        }
        else {
            cout << i << " ";
        }
        cnt++;

        if(i % 10 == 0) {
            cnt = 1;
            t++;
        }
    }
    return 0;
}