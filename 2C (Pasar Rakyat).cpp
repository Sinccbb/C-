//source : https://tlx.toki.id/courses/competitive/chapters/02/problems/C/submissions/1589480
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <cstring>
#include <climits>
#include <algorithm>
#include <limits.h>
#define ull unsigned long long
#define ll long long

using namespace std;

ll fpb(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return fpb(b, a % b);
}
ll kpk(ll a, ll b){
    return (a*b)/fpb(a,b);
}
ll kpk2(ll a[], ll b){
    ll hasil;
    for (ll i = 1; i < b; i++){
        if (i == 1){
            hasil = kpk(a[0], a[1]);
        }else{
            hasil = kpk(hasil,a[i]);
        }
    }
    return hasil;
}
ll nanti[30];
int main(){
    ll N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> nanti[i];
    }
    cout << kpk2(nanti, N);
    
    return 0;
}
