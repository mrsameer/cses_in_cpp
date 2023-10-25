#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> events; // Store customer events (arrival and departure)
    for (int i = 0; i < n; ++i) {
        int arrival, departure;
        cin >> arrival >> departure;
        events.emplace_back(arrival, 1);  // arrival will add 1 customer from current customers queue
        events.emplace_back(departure, -1);  // departure will decrement 1 customer from current customers queue
    }

    std::sort(events.begin(), events.end());
    int current_customers = 0;
    int max_customers = 0;
    for (const auto& event: events) {
        current_customers += event.second;
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers;

    return 0;
}