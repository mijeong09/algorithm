#include <iostream>

using namespace std;

int M, D;

int LastDay(int m) {
    if(m == 2) return 28;
    if(m == 4 || m == 6 || m == 9 || m == 11) return 30;

    return 31;
}

bool JudgeDay(int m, int d) {
    if(m <= 12 && d <= LastDay(m)) return true;

    return false;
}

int main() {
    cin >> M >> D;

    if(JudgeDay(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}