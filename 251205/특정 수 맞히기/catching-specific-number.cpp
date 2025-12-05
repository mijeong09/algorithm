#include <iostream>
using namespace std;

int main() {
    int n;

    while(n != 25) {
        cin >> n;

        if(n < 25) cout << "Higher" << "\n";
        else if(n > 25) cout << "Lower" << "\n";
        else cout << "Good" << "\n";
    } 

    return 0;
}