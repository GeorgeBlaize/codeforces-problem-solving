#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string target = "Timur";

        sort(s.begin(), s.end());
        
        sort(target.begin(), target.end());

        if (s == target)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}