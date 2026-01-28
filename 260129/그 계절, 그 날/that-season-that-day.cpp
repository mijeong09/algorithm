#include <iostream>

using namespace std;

int Y, M, D;

bool LeapYear(int y) {
    if(4 % y == 0 && (100 % y != 0 || 400 % y == 0)) {
        return true;
    }

    return false;
}

int LastDay(int y, int m) {
    if(m == 2) {
        if(LastDay) return 29;
        else return 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) 
        return 30;
    
    else return 31;
}

void Season(int y, int m, int d) {
    if(m <= 12 && d <= LastDay(y, m)) {
        if(m >= 3 && m <= 5) cout << "Spring";
        else if(m >= 6 && m <= 8) cout << "Summer";
        else if(m >= 9 && m <= 11) cout << "Fall";
        else cout << "Winter";
    }
    else cout << -1;
}

int main() {
    cin >> Y >> M >> D;

    Season(Y, M, D);

    return 0;
}