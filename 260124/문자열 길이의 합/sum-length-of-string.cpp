#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    int n, cnt = 0, len_sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
        len_sum += str[i].length();

        if(str[i][0] == 'a') cnt++;
    }

    cout << len_sum << " " << cnt;
    
    return 0;
}