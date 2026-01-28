#include <iostream>

using namespace std;

int M, D;

bool Func(int m, int d) {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(d <= month[m - 1]) return true;
    else return false;
}

int main() {
    cin >> M >> D;

    if(Func(M, D)) cout << "Yes";
    else cout << "No";
    
    return 0;
}