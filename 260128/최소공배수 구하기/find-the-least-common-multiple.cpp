#include <iostream>
#include <algorithm>

using namespace std;

void Lcm(int n, int m) {
    int num = max(n, m);

    while(true) {
        if((num % n == 0) && (num % m == 0)) break;

        num++;
    }
    cout << num;
}

int n, m;

int main() {
    cin >> n >> m;

    Lcm(n, m);

    return 0;
}