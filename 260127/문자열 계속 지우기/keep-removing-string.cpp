#include <bits/stdc++.h>

using namespace std;


int main() {
    string str, target;

    cin >> str >> target;

    int len_t = target.length();

    while(true) {

        bool exists = true;

        for(int i = 0; i <= (str.length() - len_t); i++) {
            exists = true;

            for(int j = 0; j < len_t; j++) {

                if(str[i + j] != target[j]) {
                    exists = false;
                    break;
                }
            }

            if(exists) {
                str.erase(i, len_t);
            }
        }

        if(!exists) break;
    }
    cout << str;

    return 0;
}
