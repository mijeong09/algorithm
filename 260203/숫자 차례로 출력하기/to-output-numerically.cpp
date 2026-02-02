#include <iostream>

using namespace std;

int N;

void PrintA(int n) {
    if(n == 0) return;

    PrintA(n - 1);
    cout << n << " ";
}

void PrintB(int n) {
    if(n == 0) return;

    cout << n << " ";
    PrintB(n - 1);
}

int main() {
    cin >> N;

    PrintA(N);
    cout << endl;
    PrintB(N);
    
    return 0;
}