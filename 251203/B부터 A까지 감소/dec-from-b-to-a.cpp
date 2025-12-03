#include <iostream>
using namespace std;

int  main() {
    int a, b;
    cin >> a >> b;

    for(int i = b; b >= a; b--) {
        cout << i << " ";
    }
    return 0;
}