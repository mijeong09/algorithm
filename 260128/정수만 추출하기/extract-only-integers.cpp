#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++) {
        if(a[i] < '0' || a[i] > '9') {
            a = a.substr(0, i);
        }
    }

    for(int i = 0; i < b.length(); i++) {
        if(!isdigit(b[i])) {
            b = b.substr(0, i);
        }
    }

    cout << stoi(a) + stoi(b);

    return 0;
}