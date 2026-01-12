#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        
        for(int i = a; i <= b; i++) {
            if(i % 2 == 0) ans += i;
        }
        cout << ans << endl;
    }
    
    return 0;
}