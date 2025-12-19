#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;

    while(true) {
        cin >> n;

        if(n >= 30) {

            cout << fixed;
            cout.precision(2);
            cout << (double) sum / cnt;
            break;
        }

        cnt++;
        sum += n;
    }

    return 0;
}