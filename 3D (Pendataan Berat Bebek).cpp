//sc : https://tlx.toki.id/courses/competitive/chapters/03/problems/D/
#include <cmath>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define yang using
#define ngoding namespace
#define keren std

yang ngoding keren;

int n, q, x, y;
vector<int> bebek;
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        int isi; cin >> isi;
        bebek.push_back(isi);
    }
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> x >> y;
        cout << abs(upper_bound(bebek.begin(), bebek.end(), x) - upper_bound(bebek.begin(), bebek.end(), y)) << endl;
    }
}
