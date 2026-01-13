#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    double sum_avg = 0;
    int cnt = 0;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];

        if(i % 2 != 0) {
            sum += arr[i];
        }

        if((i + 1) % 3 == 0) {
            sum_avg += arr[i];
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << sum_avg / cnt;

    return 0;
}