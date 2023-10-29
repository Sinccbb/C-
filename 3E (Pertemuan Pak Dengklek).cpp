//src : https://tlx.toki.id/courses/competitive/chapters/03/problems/E/
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, string>> nama;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        int a = s.length();
        nama.push_back(make_pair(a,s));
    }
    sort(nama.begin() , nama.end());
    for (int i = 0; i < n; i++){
        cout << nama[i].second << endl;
    }
    return 0;
}
