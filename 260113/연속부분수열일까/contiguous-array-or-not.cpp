#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int arrA[100];
    int arrB[100];

    for(int i = 0; i < a; i++) cin >> arrA[i];
    for(int i = 0; i < b; i++) cin >> arrB[i];

    bool isBool = false;
    for(int i = 0; i <= a - b; i++) {

        if(arrA[i] == arrB[0]) {
            for(int j = 1; j < b; j++) {
                if(arrA[i + j] != arrB[j]) continue;

                isBool = true;
            }
        }
    }

    if(isBool) cout << "Yes";
    else cout << "No";
    
    return 0;
}