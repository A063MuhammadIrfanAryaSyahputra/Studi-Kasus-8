#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;

void lib::deklarasidata() {
  for(int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
      cout << endl;
      cin >> developer[i][j];
    }
  }

}

void lib::caridata() {
  for (int i = 0; i < 3; i++) {
    if (cari == developer[0][i]) {
      jeniskaryawan = "Developer";
      nama = developer[0][i];
      alamat = developer[1][i];
      jeniskelamin = developer [2][i];
    } 
    else if (cari == admin[0][i]) {
      jeniskaryawan = "Admin";
      nama = admin[0][i];
      alamat = admin[1][i];
      jeniskelamin = admin[2][i];
    } 
    else if (cari == gudang[0][i]) {
      jeniskaryawan = "Gudang";
      nama = gudang[0][i];
      alamat = gudang[1][i];
      jeniskelamin = gudang[2][i];
    }
    else if (cari == sekretaris[0][i]){
      jeniskaryawan = "Sekretaris";
      nama = sekretaris[0][i];
      alamat = sekretaris[1][i];
      jeniskelamin = sekretari[2][i];
    }
  }
}