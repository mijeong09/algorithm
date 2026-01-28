#include <iostream>

using namespace std;

void Print(int n) {
    for(int i = 0; i < n; i++) {
        cout << "12345^&*()_" << endl;
    }
}

int N;

int main() {
    cin >> N;

    Print(N);

    return 0;
}