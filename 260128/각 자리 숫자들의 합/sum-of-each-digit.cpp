#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    string str = to_string(n);

    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        sum += (int)(str[i] - '0');
    }

    cout << sum;

    return 0;
}