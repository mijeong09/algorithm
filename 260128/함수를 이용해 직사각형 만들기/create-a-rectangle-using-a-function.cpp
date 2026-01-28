#include <iostream>

using namespace std;

void PrintRec(int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << "1";
        }
        cout << endl;
    }
}

int n, m;

int main() {
    cin >> n >> m;

    PrintRec(n, m);
    
    return 0;
}