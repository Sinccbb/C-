//src : https://tlx.toki.id/courses/competitive/chapters/03/problems/G
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
vector<int> ngaji;
int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int jawa;
        cin >> jawa;
        ngaji.push_back(jawa);
    }
    sort(ngaji.begin(), ngaji.end());
    double hasil;
    if(N % 2 == 0){
        hasil = ( static_cast<double>(ngaji[N/2 - 1] + ngaji[N/2]) / 2 );
    }else{
        hasil = static_cast<double>(ngaji[N/2]);
    }
    cout << fixed << setprecision(1) << hasil;
}
