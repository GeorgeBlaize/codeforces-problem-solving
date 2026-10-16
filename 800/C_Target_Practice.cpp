#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char a[10][10];
        int sum = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> a[i][j];

                if (a[i][j] == 'X') {
                    sum += min({i, j, 9 - i, 9 - j}) + 1;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}
