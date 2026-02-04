#include <iostream>

using namespace std;

int Func(int num) {
    if(num < 10) return num;

    return Func(num / 10) + num % 10;
}


int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int num = a * b * c;

    cout << Func(num);

    return 0;
}