#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, q;

    cin >> str >> q;

    int len_str = str.length();

    for(int i = 0; i < q.length(); i++) {
        if(q[i] == 'L') {
            str = str.substr(1, len_str - 1) + str.substr(0, 1);
        }
        else {
            str = str.substr(len_str - 1, 1) + str.substr(0, len_str - 1);
        }
    }
    cout << str << endl;

    return 0;
}