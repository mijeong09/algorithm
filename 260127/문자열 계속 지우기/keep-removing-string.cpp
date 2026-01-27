#include <bits/stdc++.h>

using namespace std;


int main() {
    string str, target;

    cin >> str >> target;

    int len_t = target.length();

    while(true) {
        int idx = -1;
        
        if(str.length() == 0) break;

        for(int i = 0; i <= str.length() - len_t; i++) {

            bool exists = true;

            for(int j = 0; j < len_t; j++) {
                if(str[i + j] != target[j]) {
                    exists = false;
                }
            }

            if(exists) {
                
                if(str == target) {
                    str = "";
                    break;
                }

                idx = i;
                str = str.substr(0, i) + str.substr(i + 2);
            }
        }

        if(idx == -1) break;
    }

    cout << str;

    return 0;
}
