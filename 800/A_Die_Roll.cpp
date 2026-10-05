#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int need = max(Y, W);
    int favorable = 7 - need;

    int g = gcd(favorable, 6);

    cout << favorable / g << "/" << 6 / g;

    return 0;
}
