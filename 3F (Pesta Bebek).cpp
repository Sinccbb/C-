//src : https://tlx.toki.id/courses/competitive/chapters/03/problems/F
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector<string> nama;
int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string huruf;
        cin >> huruf;
        nama.push_back(huruf);
        sort(nama.begin(), nama.end());
        for(int j = 0; j < i+1; j++){
            if(huruf == nama[j]){
                cout << j+1 << endl;
            }
        }
    }
    return 0;
}
