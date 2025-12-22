#include <iostream>
using namespace std;

int main() {
    bool satisfied = true;

    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;

        if(n % 3 != 0) {
            satisfied = false;
            break;
        }
    }

    cout << satisfied;
    
    return 0;
}