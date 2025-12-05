#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for(int i = a; a <= b; a++) {
        if(i % 2 != 0) continue;

        sum += i;
    }
    cout << sum;
    
    return 0;
}