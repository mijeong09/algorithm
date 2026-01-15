#include <iostream>
using namespace std;

int main() {
    int min = 1001, max = 0;

    int n;
    for(int i = 0; i < 10; i++) {
        cin >> n;

        if(n < 500 && n > max) max = n;
        if(n > 500 && n < min) min = n;
    }
    cout << max << " " << min;

    return 0;
}