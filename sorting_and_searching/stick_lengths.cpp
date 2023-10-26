#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // find the median of the array arr
    sort(arr, arr + n);
    int median = arr[n/2];

    long result = 0L;
    for (int i = 0; i < n; ++i) {
        result += abs(median - arr[i]);
    }
    cout << result;

    return 0;
}