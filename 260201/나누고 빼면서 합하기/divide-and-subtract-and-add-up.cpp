#include <iostream>

using namespace std;

int n, m;
int A[100];

int Modify() {
    int sum = 0;

    while(m >= 1) {
        sum += A[m - 1];

        if(m % 2 != 0) m -= 1;
        else m /= 2;

    }

    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << Modify();

    return 0;
}