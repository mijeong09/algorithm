#include <iostream>
using namespace std;

int main() {
    int n, q, a, b, c;
    int arr[100];

    cin >> n >> q;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < q; i++) {
        cin >> a;

        if(a == 1) {
            cin >> b;
            
            cout << arr[b - 1] << endl;
        }
        else if(a == 2) {
            cin >> b;

            int idx = 1000;
            for(int j = 0; j < n; j++) {
                if(arr[j] == b) {
                    if(j < idx) idx = j;
                }
            }
            
            if(idx == 1000) cout << 0 << endl;
            else cout << idx + 1 << endl;
        }
        else {
            cin >> b >> c;

            for(int j = b - 1; j < c; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}