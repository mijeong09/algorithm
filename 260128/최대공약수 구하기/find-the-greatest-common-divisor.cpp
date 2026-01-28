#include <iostream>
#include <algorithm>

using namespace std;

void GCD(int n, int m) {
    int gcd = 1;

    for(int i = 1; i <= min(n, m); i++) {

        if(n % i == 0 && m % i == 0 && i > gcd) gcd = i;
    }
    cout << gcd;
}

int n, m;

int main() {
    cin >> n >> m;

    GCD(n, m);

    return 0;
}