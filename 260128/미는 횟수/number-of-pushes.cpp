#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int cnt = 0;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++) {

        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        cnt++;

        if(a == b) {
            cout << cnt;
            break;
        }

        if(i == a.length() - 1) {
            cout << -1;
        }
    }

    return 0;
}