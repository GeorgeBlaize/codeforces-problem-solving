#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int place = 1;
        int count = 0;
        vector<int> ans;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                ans.push_back(digit * place);
                count++;
            }

            n /= 10;
            place *= 10;
        }

        cout << count << endl;

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
