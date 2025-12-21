#include <iostream>
using namespace std;

int main() {
    int n;
    bool satisfied = false;

    cin >> n;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            satisfied = true;
            break;
        }
    }

    if(satisfied == true) cout << 'C';
    else cout << 'N';
    
    return 0;
}