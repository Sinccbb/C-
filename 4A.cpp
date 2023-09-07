#include <iostream>

#define ui unsigned int

using namespace std;

ui nadec[80][80], lynn[80][80];
ui baris, kolom;

void pengisian_matirk(ui matirk[80][80]) {
    cin >> baris >> kolom;
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cin >> matirk[i][j];
        }
    }
}

bool cek_identik(ui matirk1[80][80], ui matirk2[80][80]) {
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            if (matirk1[i][j] != matirk2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool cek_diagonal_kiri_bawah(ui matirk1[80][80], ui matirk2[80][80]) {
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            if (matirk1[i][j] != matirk2[(kolom - 1) - j][(baris - 1) - i]) {
                return false;
            }
        }
    }
    return true;
}

bool cek_diagonal_kanan_bawah(ui matirk1[80][80], ui matirk2[80][80]) {
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            if (matirk1[i][j] != matirk2[j][i]) {
                return false;
            }
        }
    }
    return true;
}

bool cek_hor_vert(ui matirk1[80][80], ui matirk2[80][80], bool horizontal) {
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            if (matirk1[i][j] != matirk2[horizontal ? baris - 1 - i : i][horizontal ? j : kolom - 1 - j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    pengisian_matirk(nadec);
    pengisian_matirk(lynn);

    if (cek_identik(nadec, lynn)) {
        cout << "identik";
    } else if (cek_diagonal_kiri_bawah(nadec, lynn)) {
        cout << "diagonal kiri bawah";
    } else if (cek_diagonal_kanan_bawah(nadec, lynn)) {
        cout << "diagonal kanan bawah";
    } else if (cek_hor_vert(nadec, lynn, true)) {
        cout << "horisontal";
    } else if (cek_hor_vert(nadec, lynn, false)) {
        cout << "vertikal";
    } else {
        cout << "tidak identik";
    }

    return 0;
}
