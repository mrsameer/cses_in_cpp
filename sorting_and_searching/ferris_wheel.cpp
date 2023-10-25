#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;


    cin >> n >> x;

    long p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    sort(p, p + n);

    int min_gondolas = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (p[i] + p[j] <= x) {
            i++;
        }
        min_gondolas++;
        j--;
    }

    cout << min_gondolas << endl;
    return 0;
}