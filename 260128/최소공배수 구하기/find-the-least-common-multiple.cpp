#include <iostream>
#include <algorithm>

using namespace std;

void Lcm(int n, int m) {
    int gcd = 0;

     for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0) gcd = i;
     }

     cout << n * m / gcd;
}

int n, m;

int main() {
    cin >> n >> m;

    Lcm(n, m);

    return 0;
}