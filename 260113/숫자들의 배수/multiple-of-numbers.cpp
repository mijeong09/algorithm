#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;
    int n;
    
    cin >> n;

    for(int i = 0; i < 100; i++) {
        arr[i] = n * (i + 1);

        cout << arr[i] << " ";
        
        if(arr[i] % 5 == 0) {
            cnt++;
            
            if(cnt == 2) break;
        }

    }

    return 0;
}