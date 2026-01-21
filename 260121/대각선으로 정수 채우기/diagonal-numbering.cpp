#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[100][100];

    cin >> n >> m;

    int cnt = 1;
    for(int i = 0; i <= n + m - 1; i++) {

        if(i < n) {
            int a = i, b = 0;

            while(a >= 0 && b < n) {
                arr[a][b] = cnt;
                a--;
                b++;
                cnt++;
                cout << a << " "   << b << " " << cnt << endl;
            }
        }

        else {
            int a = i - m, b = 1;

            while(a >= 0 && b < n) {
                arr[a][b] = cnt;
                a--;
                b++;
                cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}