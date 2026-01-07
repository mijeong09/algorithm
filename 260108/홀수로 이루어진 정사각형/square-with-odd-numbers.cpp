#include <iostream>
using namespace std;

int main () {
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        int num = i * 2 + 9;
        for(int j = 1; j <= n; j++) {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }

    return 0;
}