#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int time = 240 - k;
    int total = 0;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        total += 5 * i;

        if (total <= time) {
            count++;
        }
        else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
