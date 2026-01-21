#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[100][100];

    cin >> n >> m;

    int cnt = 1;
    for(int i = 0; i <= n + m - 1; i++) {

        if(i < m) {
            int a = 0, b = i;

            while(a < n && b >= 0) {
                arr[a][b] = cnt;
                a++;
                b--;
                cnt++;
            }
        }
        else {
            int a = i - m + 1,  b = m - 1;

            while(a < n && b >= 0) {
                arr[a][b] = cnt;
                a++;
                b--;
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