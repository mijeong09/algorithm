#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 2; i < 9; i++) {
        for(int j = b; j >= a; j--) {
            if(i % 2 == 0) {
                cout << j << " * " << i << " = " << j * i;

                if(j > a) cout << " / ";
                else cout << endl;
            }
        }
    }
    
    return 0;
}