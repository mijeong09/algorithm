#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, target_str;
    int cnt = 0;

    cin >> str >> target_str;

    for(int i = 0; i < str.length() - 1; i++) {
        if(str[i] == target_str[0] && str[i + 1] == target_str[1]) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}