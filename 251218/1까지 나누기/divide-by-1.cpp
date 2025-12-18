#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 1; ; i++) {
        
        if(n / i == 0) {
            cout << i;
            break;
        }

        n = n / i;
    }

    return 0;
}