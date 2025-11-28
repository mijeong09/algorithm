#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    double average = ((double) a + b + c) / 3;
    
    cout << sum << "\n" << average << "\n" << sum - average;
    return 0;
}