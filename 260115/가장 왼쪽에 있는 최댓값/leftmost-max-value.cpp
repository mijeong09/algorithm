#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int prev_idx = N;

    while(true) {
        int max_idx = 0;
        
        for(int i = 0; i < prev_idx; i++) {
            if(a[i] > a[max_idx]) {
                max_idx = i;
            }
        }

        cout << max_idx + 1 << " ";

        if(max_idx == 0) break;
        
        prev_idx = max_idx;

    }
    return 0;
}
