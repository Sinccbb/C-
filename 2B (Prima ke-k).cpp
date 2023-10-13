//problem : https://tlx.toki.id/courses/competitive/chapters/02/problems/B
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
bool keprim[1000000];
int bilprim[100000];
//cek
bool isPrime(int n){
    if (n <= 1){
        return false;
    }else{
        for (int i = 2; i*i <= n; i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    for (int i = 0; i <= 1000000; i++){
        keprim[i] = isPrime(i);
    }
    int j = 0;
    for (int i = 2; i <= 1000000; i++){
        if (keprim[i]){
            j++;
            bilprim[j] = i;
        }
    }

    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        cout << bilprim[k] << endl;
    }
    
    return 0;
}
