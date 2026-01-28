#include <iostream>

using namespace std;

int Add(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    return a / b;
}

int a;
int c;
char o;

int main() {
    cin >> a >> o >> c;

    

    if(o == '+') cout << a << " " << o << " " << c << " = " << Add(a, c);
    else if(o == '-') cout << a << " " << o << " " << c << " = " << Subtract(a, c);
    else if(o == '*') cout << a << " " << o << " " << c << " = " << Mul(a, c);
    else if(o == '/') cout << a << " " << o << " " << c << " = " << Div(a, c);
    else cout << "False";

    return 0;
}