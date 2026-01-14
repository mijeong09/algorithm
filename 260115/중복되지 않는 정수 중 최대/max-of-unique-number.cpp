#include <iostream>

using namespace std;

int N;
int nums[1000], new_arr[1001] = {0, };

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        new_arr[nums[i]]++;
    }

    int max = -1;
    for(int i = 1; i < 1001; i++) {

        if(new_arr[i] == 1) {
            if(i > max) max = i;
        }
    }
    cout << max;

    return 0;
}
