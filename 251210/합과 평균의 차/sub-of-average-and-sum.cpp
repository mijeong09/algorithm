#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    int total = a + b + c;
    int avg = total / 3;

    cout << total << "\n" << avg <<  "\n" << total - avg;
    
    return 0;
}