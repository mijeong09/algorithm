#include <iostream>

using namespace std;

bool LeapYear(int n) {
    if(n % 4 != 0) return false;
    if(n % 100 == 0 && n % 400 != 0) return false;

    return true;
}

int y;

int main() {
    cin >> y;

    if(LeapYear(y)) cout << "true";
    else cout << "false";
    
    return 0;
}