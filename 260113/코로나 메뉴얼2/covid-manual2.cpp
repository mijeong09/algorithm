#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int c[4] = {0, };

    for(int i = 0; i < 3; i++) {
        char a;
        int b;

        cin >> a >> b;

        if(a == 'Y' && b >= 37) {
            c[0]++;
            cnt++;
        }
        else if(a == 'N' && b >= 37) c[1]++;
        else if(a == 'Y') c[2]++;
        else c[3]++; 
    }

    for(int i = 0; i < 4; i++) cout << c[i] << " ";
    
    if(cnt >= 2) cout << 'E';

    return 0;
}