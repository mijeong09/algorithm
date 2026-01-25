#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[20];
    int n;
    int cnt = 0, sum = 0;
    char a;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cin >> a;

    for(int i = 0; i < n; i++) {
        if(str[i][0] == a) {
            cnt++;
            sum += str[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << cnt << " " << (double) sum / cnt;
    
    return 0;
}