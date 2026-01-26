#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, tot_str = "";
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;
        tot_str.append(str);
    }
    
    string res = "";
    int cnt = 0;
    for(int i = 0; i < tot_str.length(); i++) {

        res += tot_str[i];
        cnt++;

        if(cnt == 5) {
            cout << res << endl;
            
            cnt = 0;
            res = "";
        }
    }

    cout << res;

    return 0;
}