#include <bits/stdc++.h>

using namespace std;


int main() {
    string str;
    int q;

    cin >> str >> q;

    int len = str.length();

    for(int i = 0; i < q; i++) {
        int type;
        cin >> type;

        if(type == 1) {
            str = str.substr(1, len - 1) + str.substr(0, 1);
        }
        else if(type == 2) {
            str = str.substr(len - 1, 1) + str.substr(0, len - 1);
        }
        else {
            string str2 = "";

            for(int i = len - 1; i >= 0; i--) {
                str2 += str.substr(i, 1);
            }
            str = str2;
        }
        cout << str << endl;
    }

    return 0;
}
