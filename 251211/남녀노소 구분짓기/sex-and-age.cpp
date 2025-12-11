#include <iostream>
using namespace std;

int main() {
    int a, ageA;

    cin >> a >> ageA;

    if(a == 0) {
        if(ageA >= 19) cout << "MAN";
        else cout << "BOY";
    } else {
        if(ageA >= 19) cout << "WOMAN";
        else cout << "GIRL";
    }

    return 0;
}