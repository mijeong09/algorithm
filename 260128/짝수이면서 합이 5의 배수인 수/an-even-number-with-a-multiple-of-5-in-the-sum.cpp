#include <iostream>

using namespace std;

bool Func(int n) {
    return n % 2 == 0 && (((n / 10) + (n % 10)) % 5 == 0);
}

int n;

int main() {
    cin >> n;

    if(Func(n)) cout << "Yes";
    else cout << "No";
    
    return 0;
}