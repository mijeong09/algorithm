#include <iostream>
using namespace std;

int main() {
    int a, age;
    cin >> a >> age;

    if(age >= 19) {
        if(a == 0) cout << "MAN";
        else cout << "WOMAN";

    } else {
        if(a == 0) cout << "BOY";
        else cout << "GIRL";
    }
    return 0;
}