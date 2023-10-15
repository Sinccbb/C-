// sc : https://tlx.toki.id/courses/competitive/chapters/03/problems/A
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int N, sampel;
    cin >> N >> sampel;
    vector<pair<int, int>> bil;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        bil.push_back({abs(sampel - x), x});
    }

    sort(bil.begin(), bil.end());
    cout << bil[0].second;

    return 0;
}
