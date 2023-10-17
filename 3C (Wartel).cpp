//src : https://tlx.toki.id/courses/competitive/chapters/03/problems/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<string> notelp;
vector<string> nama;
int binarysc(const vector<string>& arr, const string& target) {
    int kiri = 0;
    int kanan = arr.size() - 1;
    while (kiri <= kanan) {
        int med = (kiri + kanan) / 2;
        if (arr[med] == target) {
            return med;
        } else if (target > arr[med]) {
            kiri = med + 1;
        } else {
            kanan = med - 1;
        }
    }
    return -1; 
}
int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        nama.push_back(input);
        cin >> input;
        notelp.push_back(input);
    }
    for (int i = 0; i < q; i++){
        string target;
        cin >> target;
        int hasil = binarysc(nama, target);
        if (hasil == -1){
            cout << "NIHIL" << endl;
        }else{
            cout << notelp[hasil] << endl;
        }   
    }
    return 0;
}
