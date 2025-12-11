#include <iostream>
using namespace std;

int main() {
    int ageA, ageB;
    char a, b;

    cin >> ageA >> a >> ageB >> b;

    if((ageA >= 19 || ageB >= 19) && (a == 'M' || b == 'M')) {
        cout << 1;
    } else cout << 0;

    return 0;
}