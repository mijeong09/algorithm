#include <iostream>
using namespace std;

int main() {
    int mA, eA, mB, eB;

    cin >> mA >> eA >> mB >> eB;

    if(mA > mB || (mA == mB && eA > eB)) cout << 'A';
    else cout << 'B';

    return 0;
}