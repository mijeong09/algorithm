#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[200];
    int cnt = 0;

    for(int i = 0; i < 200; i++) {
        string a;
        cin >> a;

        if(a == "0") break;

        str[i] = a;
        cnt++;
    }

    cout << cnt << endl;
    
    for(int i = 0; i < cnt; i += 2) {
        cout << str[i] << endl;
    }
    return 0;
}