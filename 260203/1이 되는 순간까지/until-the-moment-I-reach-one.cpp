#include <iostream>

using namespace std;

int cnt = 0;

int Func(int n) {
    if(n == 1) return cnt;

    cnt++;
    if(n % 2 == 0) return Func(n / 2);
    else return Func(n / 3);
}

int main() {
    int n;
    cin >> n;

    cout << Func(n);
    
    return 0;
}