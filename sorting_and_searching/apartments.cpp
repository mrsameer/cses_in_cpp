#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, desired_size, apartment_size;
    cin >> n >> m >> k;

    int a[n];
    int b[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    /* Sort desired sizes array and apartment sizes array */
    sort(a, a + n);
    sort(b, b + m);

    /* iterate over desired sizes list and see if he gets apartment or not*/
    int result = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        desired_size = a[i];
        apartment_size = b[j];
        // can get apartment if apartment_size between desired_size + k and desired_size - k
        if (apartment_size >= desired_size - k && apartment_size <= desired_size + k) {
            i++;
            j++;
            result++;
        } else {
            if (apartment_size < desired_size) {
                j++;
            } else {
                i++;
            }
        }
    }

    cout << result << endl;
    return 0;
}
