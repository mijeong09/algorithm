#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;

    cin >> a >> b;

    double average = ((double) a + b) / 2;

    cout << fixed;
    cout.precision(1);
    cout << a + b << " " << average;

    return 0;
}