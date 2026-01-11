#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        int mul = 1;

        for(int j = a; j <= b; j++) {
            mul *= j;
        }
        
        cout << mul << endl;
    }

    return 0;
}