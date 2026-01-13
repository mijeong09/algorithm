#include <iostream>
#include <climits>
using namespace std;

int N;
int A[100];

int main() {
    cin >> N;

    int min_val = INT_MAX;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        
        if(min_val > A[i]) min_val = A[i];
    }

    int cnt = 0;
    for(int i = 0; i < N; i++) {
        if(min_val == A[i]) cnt++;
    }

    cout << min_val << " " << cnt;

    return 0;
}
