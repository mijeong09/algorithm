#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int cnt = 0;

    cin >> a >> b;

    for(int i = 0; i < a.length() - 2; i++) {

        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        cnt++;

        if(a == b) break;
    }

    if(a != b) cnt = -1;

    cout << cnt;

    return 0;
}