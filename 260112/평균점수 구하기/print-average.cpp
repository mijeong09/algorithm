#include <iostream>
using namespace std;

int main() {
    
    double arr[8];
    double sum_var = 0;

    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum_var += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_var / 8;

    return 0;
}