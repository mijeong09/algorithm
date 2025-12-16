#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    double cnt = 0;

    for(int i = 0; i < 10; i++) {

        int n;
        cin >> n;

        if(n >= 0 && n <= 200) {
            sum += n;
            cnt++;
        }
    }

    cout << sum << " ";

    cout << fixed;
    cout.precision(1);
    cout << sum / cnt;

    return 0;
}