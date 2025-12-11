#include <iostream>
using namespace std;

int main() {
    int mA, eA, mB, eB;

    cin >> mA >> eA >> mB >> eB;

    if(mA != mB) {
        cout << (mA > mB ? 'A': 'B');
    } else cout << (eA > eB ? 'A' : 'B');

    return 0;
}