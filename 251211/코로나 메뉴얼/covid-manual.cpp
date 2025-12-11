#include <iostream>
using namespace std;

int main() {
    char c;
    int n, cnt = 0;

    for (int i = 0; i < 3; i++) {
        cin >> c >> n;

        if(n >= 37 && c == 'Y') {
            cnt++;
        }
    }

    cout << (cnt >= 2 ? 'E' : 'N');
    
    return 0;
}