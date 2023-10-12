#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define str string
#define ull long long
#define lui long ungsigned int
#define ll unsigned long long
#define inv ios::sync_with_stdio(false);cin.tie();
//Test Case
//Input
// 2 (ll Banyak_Pertandingan)
// 3 1 (ll Banyak_Peserta, Yang_Diloloskan)
// P0001 (str Target_idPeserta)
// P0001 10 100 100 (str idPeserta[] | ll sesi_1[], sesi_2[], sesi_3[])
// P0002 0 0 200 (str idPeserta[] | ll sesi_1[], sesi_2[], sesi_3[])
// P0003 1 100 100 (str idPeserta[] | ll sesi_1[], sesi_2[], sesi_3[])
// 3 2
// P0001
// P0001 10 100 100
// P0002 0 0 200
// P0003 1 100 100
//Expected Output
// TIDAK
// YA
//visible_variable
ll Banyak_Pertandingan;
ll Banyak_Peserta, Yang_Diloloskan;
str Target_idPeserta;
str idPeserta[1005];
ll sesi_1[1005], sesi_2[1005], sesi_3[1005]; 
//inisible_variable
ll bobotNilai[1005];
void input(){
    for (int i = 0; i < Banyak_Peserta; i++){
        cin >> idPeserta[i] >> sesi_1[i] >> sesi_2[i] >> sesi_3[i];
        bobotNilai[i] = sesi_1[i] + sesi_2[i]*1000 + sesi_3[i]*10000000;
    }
}
//bubleSort, ex pada data : 1 9 2 8 3 7
//run algorithm
//1 9 2 8 3 7
//1 2 9 8 3 7
//1 2 8 9 3 7
//1 2 8 3 9 7
//1 2 8 3 7 9
//1 2 8 3 7 9
//1 2 3 8 7 9
//1 2 3 7 8 9
//entar_dibuang
// void tampilkan(){
//     for (int i = 0; i < Banyak_Peserta; i++){
//         cout << idPeserta[i] << " " << sesi_1[i] << " " << sesi_2[i] << " " << sesi_3[i] << endl;
//     }    
// }
//cuma ngetest
void bubbleSort(){
    for (int i = 0; i < Banyak_Peserta; i++){
        for (int j = 0; j < Banyak_Peserta-1; j++){
            if (bobotNilai[j] < bobotNilai[j+1]){
                swap(bobotNilai[j], bobotNilai[j+1]);
                swap(idPeserta[j], idPeserta[j+1]);
                swap(sesi_1[j], sesi_1[j+1]);
                swap(sesi_2[j], sesi_2[j+1]);
                swap(sesi_3[j], sesi_3[j+1]);
            }
        }   
    }
}
bool found(){
    bool temu = false;
    for (int i = 0; i < Yang_Diloloskan; i++){
        if(Target_idPeserta == idPeserta[i]){
            temu = true;
        }
    }   
    return temu;
}
int main(){
    inv
    cin >> Banyak_Pertandingan;
    for (int i = 0; i < Banyak_Pertandingan; i++)
    {
        cin >> Banyak_Peserta >> Yang_Diloloskan;
        cin >> Target_idPeserta;
        input();
        bubbleSort();
        // tampilkan();
        if (found()){
            cout << "YA";
        }else{
            cout << "TIDAK";
        }
        cout << endl;
    }
}
