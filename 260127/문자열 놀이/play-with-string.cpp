#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;

    cin >> str >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if(num == 1) {
            int a, b;
            cin >> a >> b;

            char temp = str[a - 1];
            str[a - 1] = str[b - 1];
            str[b - 1] = temp;
        }
        else {
            char x, y;
            cin >> x >> y;

            for(int j = 0; j < str.length(); j++) {
                if(str[j] == x) str[j] = y;
            }
        }

        cout << str << endl;
    }
    
    return 0;
}