#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int cnt_e = 0, cnt_b = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str.substr(i, 2) == "ee") {
            cnt_e++;
        }

        if(str.substr(i, 2) == "eb") {
            cnt_b++;
        }
    }

    cout << cnt_e << " " << cnt_b;

    return 0;
}