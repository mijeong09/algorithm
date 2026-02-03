#include <iostream>

using namespace std;

int Func(int n) {
    if(n == 1 || n == 2) return 1;

    return Func(n - 1) + Func(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << Func(n);
    
    return 0;
}