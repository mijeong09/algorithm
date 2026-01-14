#include <iostream>

using namespace std;

#define MAX_N 1000

int N;
int nums[MAX_N];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int max = -1;
    for(int i = 0; i < N; i++) {
        int curr_num = nums[i];

        if(max < curr_num) {
            int cnt = 0;

            for(int j = 0; j < N; j++) {
                if(curr_num == nums[j]) cnt++;

            }
            if(cnt == 1) max = curr_num;
        }
    }
    cout << max;

    return 0;
}
