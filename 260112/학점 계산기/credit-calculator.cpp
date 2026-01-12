#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[5];
    double sum_val = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    double avg = sum_val / n;

    cout << fixed;
    cout.precision(1);

    cout << avg << endl;

    if(avg >= 4.0) cout << "Perfect";
    else if(avg >= 3.0) cout << "Good";
    else cout << "Poor";

    return 0;
}